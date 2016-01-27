#include<stdio.h>
#include<conio.h>
#define MAX 5
float cola[MAX];
int atras;
int frente;
float num;
 void insertar() {
      
      
      if (atras==MAX){
          printf("cola llena\n\n");           
      }
      else{
      printf("Introdusca elemento\n");
       scanf("%f", &num);
                  cola[atras]=num;
                  atras=atras+1;  
      }
      
      }
 
 void eliminar(){
      if (frente==atras){
        printf("cola vacia\n\n");                 
       }
      else{
        num=cola[frente];
        frente=frente+1;   
           }
       
      }
      
 void ver(){
      int i;
      
      for (i=frente;i<atras;i++){
          
          printf("%f",cola[i]);
          }
      printf("\n");    
     }
     
     main (){ 
        int opc;
        do{
         printf ("\n\n\n");
         printf ("1. METER EN LA COLA\n\n");
         printf ("2. SACAR DE LA COLA\n\n");
         printf ("3. VER COLA\n\n");
         printf ("4. SALIR\n");
         printf ("\n $$$$$$$$$$$$$$$$$$$$$$$$$$$$ \n");
         printf ("  Escoja una opcion \n");
         scanf("%d", &opc);
         printf("\n\n");
         switch (opc){
          case 1 : insertar();
           break;
          case 2: eliminar();
           break;
          case 3: ver();
           break;
          case 4:
                return;
           break;       
           }             
         } while (opc != 4);

}
