// mod.h
#ifndef MOD_H
#define MOD_H

// Mod-specific data structure
typedef struct {
    int custom_value;
} ModData;

// Global mod data instance
extern ModData mod_data;

// Function prototypes
void initialize_mod();
void apply_custom_rules();
void shutdown_mod();

#endif // MOD_H
