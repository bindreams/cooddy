#include <cstdlib>

int EXTER_ATTACK main(int argc, char** argv)
{
    if (argc < 2) {
        return -1;
    }

    int x = std::atoi(argv[1]);
    for (int i = 0; i < 10; i += x) {  // Loop here
    }
}
