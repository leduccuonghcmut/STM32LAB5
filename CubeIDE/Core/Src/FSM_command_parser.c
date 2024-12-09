#include "FSM_command_parser.h"
#include <string.h>

void command_parser_fsm() {
    if (index_buffer != 0) {
        int i = index_buffer - 1;
        if (i >= 4 && buffer[i] == '#' &&
            buffer[i - 1] == 'T' &&
            buffer[i - 2] == 'S' &&
            buffer[i - 3] == 'R' &&
            buffer[i - 4] == '!') {
            read_adc_flag = 1;
            index_buffer = 0;
        }
        else if (i >= 3 && buffer[i] == '#' &&
                 buffer[i - 1] == 'K' &&
                 buffer[i - 2] == 'O' &&
                 buffer[i - 3] == '!') {
            read_adc_flag = 2;
            index_buffer = 0;
        }
    }
}
