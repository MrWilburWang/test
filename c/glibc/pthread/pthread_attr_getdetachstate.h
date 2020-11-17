#include <pthread.h>

//pthread_attr_setdetachstate,  pthread_attr_getdetachstate  -  set/get  detach  state  attribute in thread
//attributes object
//int pthread_attr_setdetachstate(pthread_attr_t *attr, int detachstate);
int pthread_attr_getdetachstate(pthread_attr_t *attr, int *detachstate);

//The following values may be specified in detachstate:
//
//       PTHREAD_CREATE_DETACHED
//              Threads that are created using attr will be created in a detached state.
//
//       PTHREAD_CREATE_JOINABLE
//              Threads that are created using attr will be created in a joinable state.
//
//       The  default  setting  of  the  detach state attribute in a newly initialized thread attributes object is
//       PTHREAD_CREATE_JOINABLE.


//Compile and link with -pthread.

