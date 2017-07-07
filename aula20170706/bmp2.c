#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef unsigned char Byte;
typedef unsigned short Word;
typedef unsigned int Dword;
typedef struct RGB {
    Byte B, G, R;}
RGB;


main (){
    FILE * arquivo;
    FILE * ARQUIVO;
    int wpx, hpx, bpp, ncp ,nci, i, j, K, AUX, PAL, troca;
    RGB pixel, pixel1;
    Byte byte, x=0;
    Word word;
    Dword dword;
    arquivo = fopen ("sapoembmp.bmp", "rb");
    ARQUIVO = fopen ("sapoloco.bmp", "wb");
    if (!arquivo){
        fprintf(stderr, "Arquivo inexistente!\n");
        return (EXIT_FAILURE);
    }
    if (!ARQUIVO){
        fprintf(stderr, "Arquivo inexistente!\n");
        return (EXIT_FAILURE);
    }
    fread (&byte, sizeof (Byte), 1, arquivo);
    fwrite (&byte, sizeof (Byte), 1, ARQUIVO);
    printf ("%c", byte);
    fread (&byte, sizeof (Byte), 1, arquivo);
    fwrite (&byte, sizeof (Byte), 1, ARQUIVO);
    printf ("%c\n", byte);
    fread (&dword, sizeof (Dword), 1, arquivo);
    fwrite (&dword, sizeof (Dword), 1, ARQUIVO);
    printf ("Tamanho: %d bytes\n", dword);
    fread (&word, sizeof (Word), 1, arquivo);
    fwrite (&word, sizeof (Word), 1, ARQUIVO);
    printf ("info reserv: %d bytes\n", word);
    fread (&word, sizeof (Word), 1, arquivo);
    fwrite (&word, sizeof (Word), 1, ARQUIVO);
    printf ("info2 reserv: %d bytes\n", word);
    fread (&dword, sizeof (Dword), 1, arquivo);
    fwrite (&dword, sizeof (Dword), 1, ARQUIVO);
    printf ("Offset: %d bytes\n", dword);
    fread (&dword, sizeof (Dword), 1, arquivo);
    fwrite (&dword, sizeof (Dword), 1, ARQUIVO);
    printf ("Cabecalho: %d bytes\n", dword);
    fread (&dword, sizeof (Dword), 1, arquivo);
    fwrite (&dword, sizeof (Dword), 1, ARQUIVO);
    printf ("Largura: %d bytes\n", dword);
    wpx = dword;
    fread (&dword, sizeof (Dword), 1, arquivo);
    fwrite (&dword, sizeof (Dword), 1, ARQUIVO);
    printf ("Altura: %d bytes\n", dword);
    hpx = dword;
    fread (&word, sizeof (Word), 1, arquivo);
    fwrite (&word, sizeof (Word), 1, ARQUIVO);
    printf ("Planos de cores: %d bytes\n", word);
    fread (&word, sizeof (Word), 1, arquivo);
    fwrite (&word, sizeof (Word), 1, ARQUIVO);
    printf ("bits por pixel: %d bytes\n", word);
    bpp=word;
    fread (&dword, sizeof (Dword), 1, arquivo);
    fwrite (&dword, sizeof (Dword), 1, ARQUIVO);
    printf ("compressao: %d bytes\n", dword);
    fread (&dword, sizeof (Dword), 1, arquivo);
    fwrite (&dword, sizeof (Dword), 1, ARQUIVO);
    printf ("tamanho imagem: %d bytes\n", dword);
    fread (&dword, sizeof (Dword), 1, arquivo);
    fwrite (&dword, sizeof (Dword), 1, ARQUIVO);
    printf ("resolucao horz: %d bytes\n", dword);
    fread (&dword, sizeof (Dword), 1, arquivo);
    fwrite (&dword, sizeof (Dword), 1, ARQUIVO);
    printf ("resolucao vert: %d bytes\n", dword);
    ncp = dword;
    printf ("numero de cores: %d\n", (ncp == 0)?1 << bpp : ncp);
    fread (&dword, sizeof (Dword), 1, arquivo);
    fwrite (&dword, sizeof (Dword), 1, ARQUIVO);
    nci = dword;
    printf ("numero de cores: %d\n", (nci == 0)?1 << bpp : nci);

PAL = floor((bpp*wpx + 31.)/32.)*4;
AUX = PAL - wpx*3;
for (j = 0; j < hpx; j++){
    for (i = 0; i<wpx; i++){
        //leia/escreva a informação do pixel (canais B, G e R, nesta ordem)
        fread (&pixel, sizeof (RGB),1, arquivo);
        pixel1.R=pixel.G;
        pixel1.G=pixel.R;
        pixel1.B=pixel.B;
        //printf ("R: %d, G: %d, B: %d\n", pixel.R, pixel.G, pixel.B);
        fwrite (&pixel1, sizeof (RGB), 1, ARQUIVO);
    }

    if (AUX > 0){
        fseek (arquivo, AUX, SEEK_CUR);
        for (K=0; K<AUX; K++){
            fwrite (&x, sizeof (Byte), 1, ARQUIVO);
        }
    }
}



    fclose (ARQUIVO);
    fclose (arquivo);
    return EXIT_SUCCESS;
}
