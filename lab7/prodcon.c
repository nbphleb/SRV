#include <stdio.h>
#include <pthread.h>

int data_ready = 0;
int inf = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t condvar = PTHREAD_COND_INITIALIZER;

void *consumer(void *not_used)
{
	printf("This is consumer \n");
	
	while(1)
	{
		pthread_mutex_lock(&mutex);
		printf("W1 \n");
		while (!data_ready)
		{
			printf("W2 \n");
			pthread_cond_wait(&cond, &mutex);
			printf("W3 \n");
		}
	printf("\nData from producer = %d \n", inf);
	data_ready = 0;
	pthread_cond_signal(&cond);
	pthread_mutex_unlock(&mutex);
	}
}

void *producer(void *not_used)
{
	printf("\nThis is producer \n") ;
	
	while(1)
	{
		sleep(4);
		printf("\nProducer got data from h/w = %d \n", inf);
		pthread_mutex_lock(&mutex);
		printf("Wpl \n");
		while(data_ready)
		{
			printf("Wp2 \n");
			pthread_cond_wait(&cond, &mutex);
		}
		data_ready = l;
		inf++;
		printf("Wp3 \n");
		pthread_cond_signal(&cond);
		pthread_mutex_unlock(&mutex);
	}
}

void main(void)
{
	printf("Start. Student: Asonova Svetlana I992 \n\n");
	pthread_create(NULL,NULL, consumer, NULL);
	pthread_create(NULL,NULL, producer, NULL);
	sleep(20);
}