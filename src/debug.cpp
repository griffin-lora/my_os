#include "debug.h"
#include "array.h"


namespace dbg {
    template<>
    void write<string>(string val) {
        for (auto ch : val) {
            std::putchar(ch);
        }
    }

    template<>
    void write<bool>(bool val) {
        std::puts(val ? "true" : "false");
    }
}