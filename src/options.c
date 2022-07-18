#include "service.h"

int usage(int err)
{
    printf("Usage:\n");
    printf("  svc.exe option\n");
    printf("  options: install start stop delete\n");
    return (err);
}

int parse_args(int argc, char **argv)
{
    int opt;

    opt = NO_OPT;
    if (argc - 1 == 1)
    {
        opt = INV_OPT;
        opt = strncmp(argv[1], "install", 7) ? opt : INSTALL;
        opt = strncmp(argv[1], "start", 5)   ? opt : START;
        opt = strncmp(argv[1], "stop", 4)    ? opt : STOP;
        opt = strncmp(argv[1], "delete", 6)  ? opt : DELETE;
    }
    return (opt);
}

int get_option(int argc, char **argv)
{
    int opt;

    opt = parse_args(argc, argv);
    if (opt <= 0)
    {
        if (opt == INV_OPT)
            fprintf(stderr, "Invalid option: %s\n", argv[1]);
        return (usage(NO_OPT));
    }
    return (opt);
}