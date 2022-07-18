#include "service.h"

int service_install()
{
    return (0);
}

int service_start()
{
    return (0);
}

int service_stop()
{
    return (0);
}

int service_delete()
{
    return (0);
}


int main(int argc, char **argv)
{
    int opt;

    opt = get_option(argc, argv);
    if (opt <= 0)
        return (1);
    switch (opt)
    {
        case INSTALL:   return (service_install()); break;
        case START:     return (service_start()); break;
        case STOP:      return (service_stop()); break;
        case DELETE:    return (service_delete()); break;
    }
    return (0);
}