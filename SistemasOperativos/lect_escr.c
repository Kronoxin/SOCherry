//#include<stdio.h>
//#include<string.h>
//#include<pthread.h>
//#include<stdlib.h>
//#include<unistd.h>
//
//int dato = 5;                   /*recurso*/
//int n_lect = 0;                 /*numero de lectores*/
//void *Lector(void *arg);
//void *Escritor(void *arg);
//pthread_mutex_t mutex;
//
//
//int main(int argc, char *argv[])
//{
//    pthread_t th1, th2, th3, th4;
//    pthread_mutex_init(&mutex, NULL);
//    
//    pthread_create(&th1, NULL, Lector, NULL);
//    pthread_create(&th2, NULL, Escritor, NULL);
//    pthread_create(&th3, NULL, Lector, NULL);
//    pthread_create(&th4, NULL, Escritor, NULL);
//
//    pthread_join(th1, NULL);    pthread_join(th2, NULL);
//    pthread_join(th3, NULL);    pthread_join(th4, NULL);
//    
//    pthread_mutex_destroy(&mutex);
//    exit(0);
//}
//
///*codigo del lector */
//void *Lector(void *arg) {
//   while(1){
//     n_lect++;
//     
//     /*leer*/
//     printf("%d\n", dato);
//
//     n_lect--;
//     
//  }
//}
//
///*codigo del escritor */
//void *Escritor(void *arg){
//  while(1){
//   
//    /*modificar el recurso */
//    pthread_mutex_lock(&mutex);
//    dato = dato + 2;
//      pthread_mutex_unlock(&mutex);
//    
//  }
//}
