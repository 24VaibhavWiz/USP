#include "stdio.h" 
#include "unistd.h"
#include "sys/ipc.h" 
#include "sys/msg.h" 

struct mesg_buffer { 
	long mesg_type; 
	char mesg_text[20]; 
} message; 

int main() 
{ 
	key_t key; 
	int msgid; 
 
	key = ftok("msgrcv.c", 8); 

	msgid = msgget(key, 0600 | IPC_CREAT); 

	msgrcv(msgid, &message, sizeof(message.mesg_text), 1, 0); 

	printf("Data Received is : %s \n",message.mesg_text); 

	msgctl(msgid, IPC_RMID, NULL); 
} 

