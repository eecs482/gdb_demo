#include <cstdlib>
#include <cassert>
#include <string>
#include <iostream>
#include <stdexcept>
#include <ctime>
#include <sys/types.h>

static long global_counter = 0;

void busy_sleep(int n){
    for(long i = 0; i < n; i++){
        global_counter++;
    }
}

int main(int argc, char **argv){
    assert(argc == 2); // this program requires exactly 1 argument
    try{
        auto cryptic_name = [&]()->void{
            auto argument = std::stoi(std::string(argv[1]));
            std::cout << "argument: " << argument << "\n";
            std::cout << "some arithmetic: " << time(nullptr) / (5 - argument) << "\n";
        };
        cryptic_name();
        busy_sleep(1<<20);
        return EXIT_SUCCESS;
    }
    catch(const std::invalid_argument& e){
        [&]()->void{
            std::cerr << "foobar: " << e.what() << "\n";
            printf("global_counter: %s\n", ((char **)global_counter)[0]);
        }();
        return EXIT_FAILURE;
    }
}
