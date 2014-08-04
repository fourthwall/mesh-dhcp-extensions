#include "proto.h"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

heartbeat* craftHeartbeat(int active) {
	heartbeat* h = malloc(sizeof(heartbeat));
	h->s = malloc(strlen("heartbeat") + 1);
	strcpy(h->s, "heartbeat");

	return h;
}

char* serializeHeartbeat(heartbeat* h, int* length) {
	*length = strlen(h->s) + 1;
	return h->s;
}

heartbeat* deserializeHeartbeat(char* s) {
	heartbeat* h = malloc(sizeof(heartbeat));
	h->s = s;
	return h;
}

void printHeartbeat(heartbeat* h) {
	printf("\t%s\n", h->s);
}

int isHeartbeat(char* c) {
    int val = strcmp(c, "heartbeat");
    if (val) {
        printf("Function says heartbeat");
    }
    else {
        printf("Function says response");
    }
    return val;
}

response* craftResponse(heartbeat* h) {
	response* r = malloc(sizeof(response));
	r->s = malloc(strlen("response") + 1);
	strcpy(r->s, "response");

	return r;
}

char* serializeResponse(response* r, int* length) {
	*length = strlen(r->s) + 1;
	return r->s;
}

response* deserializeResponse(char* s) {
	response* r = malloc(sizeof(response));
	r->s = s;
	return r;
}

void printResponse(response* r) {
	printf("\t%s\n", r->s);
}
