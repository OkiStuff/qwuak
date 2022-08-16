/*
    Qwuak Router

    Requires:
        <qwuak/router.h>
*/

#ifndef Q_ROUTER_H
#define Q_ROUTER_H

typedef void (*q_route_callback_t)(const char*);

struct _q_route
{
    const char* route;
    q_route_callback_t callback;
};

struct _q_router
{
    struct _q_route* routes; // expectes an allocated array with an allocated size of at least `sizeof(q_route_t)`
    
};

#ifdef __cplusplus
extern "c" {
#endif // __cplusplus



#ifdef __cplusplus
}
#endif // __cplusplus
#endif // Q_ROUTER_H