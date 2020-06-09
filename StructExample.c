#include <stdio.h>

// define data type smartphone_t as struct

struct smartphone_t{
    char* brand;
    char* model;
    char* color;
    int memory;
};

void add_additional_sd_card(struct smartphone_t* phone) {
    //ToDo
    phone->memory = phone->memory + 128;
}

void print_smartphone_configuration(struct smartphone_t phone) {
    printf("Your configuration:\n   Brand: %s\n   Model: %s\n   Color: %s\nTotal Memory: %d MB\n\n", phone.brand,phone.model,phone.color,phone.memory);
}

int main() {

    struct smartphone_t phone = {
            .brand = "Sumsang",
            .model = "Milkyway S3",
            .color = "black",
            .memory = 16,
    };

    print_smartphone_configuration(phone);
    add_additional_sd_card(&phone);
    print_smartphone_configuration(phone);
    

    return 0;
}

