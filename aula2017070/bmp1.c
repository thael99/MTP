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
    int wpx, hpx, bpp, ncp ,nci, i, j, AUX, PAL;
    RGB pixel;
    Byte byte;
    Word word;
    Dword dword;
    arquivo = fopen ("sapoloco.bmp", "rb");
    if (!arquivo){
        fprintf(stderr, "Arquivo inexistente!\n");
        return (EXIT_FAILURE);
    }
    fread (&byte, sizeof (Byte), 1, arquivo);
    printf ("%c", byte);
    fread (&byte, sizeof (Byte), 1, arquivo);
    printf ("%c\n", byte);
    fread (&dword, sizeof (Dword), 1, arquivo);
    printf ("Tamanho: %d bytes\n", dword);
    fread (&word, sizeof (Word), 1, arquivo);
    printf ("info reserv: %d bytes\n", word);
    fread (&word, sizeof (Word), 1, arquivo);
    printf ("info2 reserv: %d bytes\n", word);
    fread (&dword, sizeof (Dword), 1, arquivo);
    printf ("Offset: %d bytes\n", dword);
    fread (&dword, sizeof (Dword), 1, arquivo);
    printf ("Cabecalho: %d bytes\n", dword);
    fread (&dword, sizeof (Dword), 1, arquivo);
    printf ("Largura: %d bytes\n", dword);
    wpx = dword;
    fread (&dword, sizeof (Dword), 1, arquivo);
    printf ("Altura: %d bytes\n", dword);
    hpx = dword;
    fread (&word, sizeof (Word), 1, arquivo);
    printf ("Planos de cores: %d bytes\n", word);
    fread (&word, sizeof (Word), 1, arquivo);
    printf ("bits por pixel: %d bytes\n", word);
    bpp=word;
    fread (&dword, sizeof (Dword), 1, arquivo);
    printf ("compressao: %d bytes\n", dword);
    fread (&dword, sizeof (Dword), 1, arquivo);
    printf ("tamanho imagem: %d bytes\n", dword);
    fread (&dword, sizeof (Dword), 1, arquivo);
    printf ("resolucao horz: %d bytes\n", dword);
    fread (&dword, sizeof (Dword), 1, arquivo);
    printf ("resolucao vert: %d bytes\n", dword);
    ncp = dword;
    printf ("numero de cores: %d\n", (ncp == 0)?1 << bpp : ncp);
    fread (&dword, sizeof (Dword), 1, arquivo);
    nci = dword;
    printf ("numero de cores: %d\n", (nci == 0)?1 << bpp : nci);

PAL = floor((bpp*wpx + 31.)/32.)*4;
AUX = PAL - wpx*3;

for (j = 0; j < hpx; j++){
    for (i = 0; i<wpx; i++){
        //leia/escreva a informação do pixel (canais B, G e R, nesta ordem)
        fread (&pixel, sizeof (RGB),1, arquivo);
        printf ("R: %d, G: %d, B: %d\n", pixel.R, pixel.G, pixel.B);

    }
    if (AUX > 0){
        fseek (arquivo, AUX, SEEK_CUR);
    }
}


    fclose (arquivo);
    return EXIT_SUCCESS;
}
