#include <stdio.h>
#include <pthread.h>



void* pickpup_forks(void *arg){ //when a philsopher wishes to eat
    int *philoNum =  (int *)arg;

}
return_forks (int philosopher_number); // when a philospher is done eat




int main(){
    //int philosopherNum = [0,1,2,3,4];

    //creating variable to store thread id for each thread we create
    pthread_t philospher0;
    pthread_t philospher1;
    pthread_t philospher2;
    pthread_t philospher3;
    pthread_t philospher4;

    
    

    pthread_create(&philsopher0, NULL, pickup_forks, 0);
    pthread_create(&philsopher1, NULL, pickup_forks, 1);
    pthread_create(&philsopher2, NULL, pickup_forks, 2);
    pthread_create(&philsopher3, NULL, pickup_forks, 3);
    pthread_create(&philsopher4, NULL, pickup_forks, 4);


    // create 2 mutex locks
    pthread_mutex_t mutex1; // mutex lock
    pthread_cond_t cond_var1; //cond var

    pthread_mutex_t mutex2; // mutex lock
    pthread_cond_t cond_var2; //cond var

    pthread_mutex_init(&mutex1,NULL); // funct for creating mutex lock
    pthread_cond_init(&cond_var1,NULL); //func for creating condition var



}

pthread_mutex_lock(&mutex); //locks the mutex lock
while (a != b)
    pthread_cond_wait(&cond_var, &mutex); //releases the mutex lock
pthread_mutex_unlock(&mutex) //unlocks the mutex lock



/*The mutex lock associated with the condition variable must be locked before the
pthread_cond_wait() function is called, since it is used to protect the data in the conditional clause
from a possible race condition. Once this lock is acquired, the thread can check the condition. If
the condition is not true, the thread then invokes pthread_cond_wait(), passing the mutex lock and
the condition variable as parameters. Calling pthread_cond_wait() releases the mutex lock, thereby
allowing another thread to access the shared data and possibly update its value so that the condition
clause evaluates to true.*/


}
