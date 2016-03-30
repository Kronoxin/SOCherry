//
//
///* hilos2.c */
///* Usamos el pthread_join para que el hilo ppal espere a que termienn los otros */
//
//#include<stdio.h>
//#include<string.h>
//#include<pthread.h>
//#include<stdlib.h>
//#include<unistd.h>
//
//void *trabajo(void *arg);
//long int variable_global = 0;
//
//pthread_t tid[4]; //tid es el identificador de hilo (threadID)
//
//int main(void)
//{
//    int i = 0;
//    int err;
//
//  
//    while(i < 4)  //Queremos crear 4 hilos
//    {
//        err = pthread_create(&(tid[i]), NULL, trabajo, NULL);
//        if (err != 0)
//            printf("\nError al crear el hilo :[%d]", strerror(err));
//        else
//            printf("\n Hilo creado!\n");
//
//        i++;
//    }
//
//    (void) pthread_join(tid[0], NULL);
//    (void) pthread_join(tid[1], NULL);
//    (void) pthread_join(tid[2], NULL);
//    (void) pthread_join(tid[3], NULL);
//    
//    printf("El valor FINAL es: %d\n", variable_global);
//    variable_global=variable_global+5;
//    printf("El valor FINAL del todo es: %d\n", variable_global);
//
//  
//    return 0;
//}
//
//void *trabajo(void *arg)
//{
//    long int i = 0;
//    /* i es un avariable local*/
//
//    pthread_t id = pthread_self();
//
//    
//
//    for(i=0; i<100000; i++)
//    {
//
//       
//    	 variable_global++;
//      
//  /*  
//     	if(pthread_equal(id,tid[0]))
//     	{
//        	printf("\n El valor de variable global para el primer hilo es: %d\n",variable_global);
//              
//     	}
//    	if(pthread_equal(id,tid[1]))
//     	{
//        	printf("\n El valor de variable global para el 2 hilo es: %d\n",variable_global);
//               
//     	}
//	if(pthread_equal(id,tid[2]))
//     	{
//        	printf("\n El valor de variable global para el 3 hilo es: %d\n",variable_global);
//     	}
//
//        if(pthread_equal(id,tid[3]))
//     	{
//        	printf("\n El valor de variable global para el 4 hilo es: %d\n",variable_global);
//     	}
//    	*/
//       
//    }
//
//   
//
//   
//}
