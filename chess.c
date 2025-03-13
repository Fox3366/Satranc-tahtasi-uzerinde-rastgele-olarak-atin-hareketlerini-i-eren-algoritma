#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) 
{
	
	int aaa=1;
	
	srand(time(NULL));
	int i,j,N;
	
	printf("N degerini giriniz-->");
	scanf("%d",&N);
	if(N<4)
	{
		printf("N degeri 4ten buyuk olmalidir!");
		return 1;
	}
	while(1)
	{

	int matris[N][N];
	matris[0][0]=1;
	matris[N-1][N-1]=1;

	int yuzde=0;
	for(i=0;i<N;i++)
	{
        for(j=0;j<N;j++)
		{
            matris[i][j]=1; 
        }
    }

	
	int A;
	A=rand()%21+20;
    while(yuzde < (N*N*A)/100)
	{
        i=rand()%N;
        j=rand()%N;
		
        if(matris[i][j] == 1 && (i != 0 || j != 0) && (i != N - 1 || j != N - 1))
		{
            matris[i][j]=0;
            yuzde++;
        }
		
    }
	printf("Oyun basliyor\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d  ",matris[i][j]);
		}
		printf("\n");
	}
	
	// başlangıç=[0][0]
	
	int baslangicsira=0;
	int baslangicstun=0;

	int olasiliksayisi=0;
	int hareketsayisi=1;
	int randomhareket=0;
	int ziyaret[N][N];
	int rastgele;

	

	for(int y=0; y<999; y++)
	{
		 rastgele = rand()%8;
	

	for ( i = 0; i <= N; i++) 
	{
		for ( j = 0; j <= N; j++)
		{
			if(i == baslangicsira && j == baslangicstun)
			{
				matris[i][j]=hareketsayisi;
				switch (rastgele)
				{

					
					case 0:	
					if(i-2 >= 0 && j-1 >= 0 && matris[i-2][j-1] == 1)
					{
						if(i-2 != 0 || j-1 != 0)
						{
							if(ziyaret[i-2][j-1]!=44)
							{
								matris[i-2][j-1] = ++hareketsayisi;
								ziyaret[i-2][j-1] = 44;
								olasiliksayisi++;
								baslangicsira=i-2;
								baslangicstun=j-1;
								break;
							}
						}
					}

					case 1:	
					if(i-2 >= 0 && j+1 < N && matris[i-2][j+1] == 1)
					{
						if(i-2 != 0 || j+1 != 0)
						{
							if(ziyaret[i-2][j+1]!=44)
							{
								matris[i-2][j+1] = ++hareketsayisi;
								ziyaret[i-2][j+1] = 44;
								olasiliksayisi++;
								baslangicsira=i-2;
								baslangicstun=j+1;
								break;
							}
						}		
					}
					case 2:	
					if(i-1 >=0 && j-2 >= 0 && matris[i-1][j-2] == 1)
					{
						if(i-1 != 0 || j-2 != 0)
						{
							if(ziyaret[i-1][j-2]!=44)
							{
								matris[i-1][j-2] = ++hareketsayisi;
								ziyaret[i-1][j-2] = 44;
								olasiliksayisi++;
								baslangicsira=i-1;
								baslangicstun=j-2;
								break;
							}
						}
					}
					case 3:	
					if(i-1 >= 0 && j+2 < N && matris[i-1][j+2] == 1)
					{
						if(i-1 != 0 || j+2 != 0)
						{
							if(ziyaret[i-1][j+2]!=44)
							{
								matris[i-1][j+2] = ++hareketsayisi;
								ziyaret[i-1][j+2] = 44;
								olasiliksayisi++;
								baslangicsira=i-1;
								baslangicstun=j+2;
								break;
							}
						}
					}
					case 4:	
					if(i+1 < N && j-2 >= 0 && matris[i+1][j-2] == 1)
					{
						if(i+1 != 0 || j-2 !=0)
						{
							if(ziyaret[i+1][j-2]!=44)
							{
								matris[i+1][j-2] = ++hareketsayisi;
								ziyaret[i+1][j-2] = 44;
								olasiliksayisi++;
								baslangicsira=i+1;
								baslangicstun=j-2;
								break;
							}
						}
					}
					case 5:	
					if(i+1 < N && j+2 < N && matris[i+1][j+2] == 1)
					{
						if(i+1 != 0 || j+2 != 0)
						{
							if(ziyaret[i+1][j+2]!=44)
							{
								matris[i+1][j+2] = ++hareketsayisi;
								ziyaret[i+1][j+2] = 44;
								olasiliksayisi++;
								baslangicsira=i+1;
								baslangicstun=j+2;
								break;
							}
						}
					}
					case 6:	
					if(i+2 < N && j-1 >= 0 && matris[i+2][j-1] == 1)
					{
						if(i+2 != 0 || j-1 != 0)
						{
							if(ziyaret[i+2][j-1]!=44)
							{
								matris[i+2][j-1] = ++hareketsayisi;
								ziyaret[i+2][j-1] = 44;
								olasiliksayisi++;
								baslangicsira=i+2;
								baslangicstun=j-1;
								break;
							}
						}
					}
					case 7:	
					if(i+2 < N && j+1 < N && matris[i+2][j+1] == 1)
					{
						if(i+2 != 0 || j+1!=0)
						{
							if(ziyaret[i+2][j+1]!=44)
							{
								matris[i+2][j+1] = ++hareketsayisi;
								ziyaret[i+2][j+1] = 44;
								olasiliksayisi++;
								baslangicsira=i+2;
								baslangicstun=j+1;
								break;
							}
						}
					}
			}	
		}
	}
}
	olasiliksayisi=0;

	if(matris[N-1][N-1] != 1)
	{
		break;
	}

	}

	
	printf("\n");
    for ( i = 0; i < N; i++)
	{
        for ( j = 0; j < N; j++) 
		{
        	printf("%2d ", matris[i][j]);
        }
        printf("\n");
	}

	if(matris[N-1][N-1] != 1)
	{
		printf("\nCikis yolu bulundu!");
		printf("\n%d adet deneme ardindan cikis yolu bulunmustur..",aaa);
		break;
	}
	else
	{
		printf("\nCikis yolu bulunamadi oyun tekrar baslayacak...\n");
		printf("******************************************\n\n\n");
	}
	aaa++;

}

	return 0;
}
