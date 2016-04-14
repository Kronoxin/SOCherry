////
////  filosofos.c
////  SistemasOperativos
////
//
//
//#include <stdio.h>
//#include<string.h>
//#include<pthread.h>
//#include<stdlib.h>
//#include<unistd.h>
//#include<semaphore.h>
////#include<sys/sem.h>
//#include<time.h>
///* Programa cena de los filósofos. Sin interbloqueo */
//
//#define N 5    /*datos a producir */
//sem_t palillo[N]={1};                /*elementos en el buffer */
//
//void pensar()
//{
//    
//    srand(time(NULL));
//    int r = rand();
//}
//
//void comer()
//{
//    
//}
//
//
//void filosofo (int i) //proceso de cada filosofo
//{
//    while(true) //bucle infinito, se puede colocar condición de parada con variable
//    {
//        pensar ( ); //tiempo de espera aleatorio de c/filosofo antes de ‘comer’
//        sem
//        sem_wait(palillo [i], palillo[i +1] mod 5); //pido los 2 palillos simultáneamente
//        comer ( ); //tiempo de espera mientras come (puede ser aleatorio)
//        signal (palillo [i]); //libero palillo izquierdo
//        signal (palillo [(i + 1) mod 5]); //libero palillo derecho
//        /* El orden en que libero los palillos no es de especial relevancia. */
//    }
//}
//void main()
//{
//    parbegin (filosofo (0), filosofo (1), filosofo (2), filosofo (3), …, filosofo (N));
//    //inicio de los procesos (filósofos)
//}