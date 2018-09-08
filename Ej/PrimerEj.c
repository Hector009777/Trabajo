#include <stdio.h>
#include <stdlib.h>

int main() {
 int f1,c1,f2,c2,x,y,w,i,u,k,n;
 int co=0, su=0;
 int p[10][10],se[10][10], mu[10][10];

   printf("Ingresar numero de filas y columnas de la matriz 1\n");
   scanf("%d%d", &f1,&c1);
   printf("Ingresar los elementos de la matriz 1\n");

   for ( x=0; x<f1; x++)
   for ( y=0; y<f1; y++)
   scanf("%d",&p[x][y]);
   
     printf("Ingresar numero de filas y columnas de la matriz 2\n");
     scanf("%d%d",&f2,&c2);


        if(c1 !=f2) 
          printf("No se pueden multiplicar las matrices\n");
           else{
       printf ("Ingresar los elementos de la matriz 2\n");

            for(x=0;x<f2; x++)
            for(y=0;y<c2; y++)
            scanf("%d",&se[x][y]);

               for(x=0; x<f1; x++)
                 {
               for(y=0;y<c2; y++)
                 {
               for( w=0; w<f2; w++)
                 {
                su=su + p[x][w]*se[w][y];
             }
           
          mu[x][y]=su;
          su=0;
         }
        }

    printf ("Los resultados son:\n");
      for(x=0; x<f1; x++)
      {
      for (y=0; y<c2; y++)
        printf("%d\t", mu[x][y]);

      printf("\n");
        
}

for(i=0; i<f1; i++){
	for(u=0; u<f1; u++){
		n=mu [i][u];
		
		for(k=1; k<=n; k++){
			
			if((n%2)==0){
			
			co=co+1;
			
		}
		
		}
		
		if(co<=2){
			
			printf("Es primo\n");
			
		}else{
			printf ("No es primo\n");
		}
		
		co=0;
		k=0;
		n=0;
	}
	
	
}


}
 return 0;
 }  
