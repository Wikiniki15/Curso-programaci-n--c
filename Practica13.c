#include <stdio.h>

int main()
{
  int informacion[3][4]={{1,120,150,220}, {2,130,160,230}, {3,100,120,200}};
  int baja=0, media=0, alta=0;

  for(int i = 0; i < 3; i++)
  {
    for (int j = 1; j < 4; j++)
    {
      if (j==1)
      {
        baja=baja+informacion[i][j];
      }
      if(j==2)
      {
        media=media+informacion[i][j];
      }
      if(j==3)
      {
        alta=alta+informacion[i][j];
      }
    }
  }
  float pbaja=baja/3;
  float pmedia=media/3;
  float palta=alta/3;
  printf("Promedio\nTemporada baja: %.2f\nTemporada media: %.2f\nTemporada alta: %.2f", pbaja, pmedia, palta);
}