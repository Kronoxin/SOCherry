

/* hilos1.c */
/* En este hay 4 hilos, y cada vez da un resultado diferente porque el hilo ppal termina antes que los hijos */

#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

void *trabajo(void *arg);
int variable_global = 0;
pthread_mutex_t mutex;
//pthread_cond_t terminado;

pthread_t tid[4]; //tid es el identificador de hilo (threadID)

int main(void)
{
    pthread_mutex_init(&mutex, NULL);
    
    int i = 0;
    int err;

  
    while(i < 4)  //Queremos crear 4 hilos
    {
        err = pthread_create(&(tid[i]), NULL, trabajo, NULL);
        if (err != 0)
            printf("\nError al crear el hilo :[%d]", strerror(err));
        else
            printf("\n Hilo creado!\n");

        i++;
    }
    
    (void) pthread_join(tid[0], NULL);
    (void) pthread_join(tid[1], NULL);
    (void) pthread_join(tid[2], NULL);
    (void) pthread_join(tid[3], NULL);
    pthread_mutex_destroy(&mutex);
    
    printf("El valor FINAL es: %d\n", variable_global);
    variable_global=variable_global+5;
    printf("El valor FINAL del todo es: %d\n", variable_global);

    
    
    return 0;
}

void *trabajo(void *arg)
{
    int i = 0;
    /* i es un avariable local*/

    pthread_t id = pthread_self();

    

    for(i=0; i<20000; i++)
    {

        pthread_mutex_lock(&mutex);
        variable_global++;
        pthread_mutex_unlock(&mutex);
    /*
     	if(pthread_equal(id,tid[0]))
     	{
        	printf("\n El valor de variable global para el primer hilo es: %d\n",variable_global);
              
     	}
    	if(pthread_equal(id,tid[1]))
     	{
        	printf("\n El valor de variable global para el 2 hilo es: %d\n",variable_global);
               
     	}
	if(pthread_equal(id,tid[2]))
     	{
        	printf("\n El valor de variable global para el 3 hilo es: %d\n",variable_global);
     	}

        if(pthread_equal(id,tid[3]))
     	{
        	printf("\n El valor de variable global para el 4 hilo es: %d\n",variable_global);
     	}
    */	
       
    }

   
    return NULL;
   
}
