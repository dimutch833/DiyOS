#include <small.h>

uint8_t* art_logo_bloddy = {
"    ▓█████▄  ██▓▓██   ██▓ ▒█████    ██████ \n"
"    ▒██▀ ██▌▓██▒ ▒██  ██▒▒██▒  ██▒▒██    ▒ \n"
"    ░██   █▌▒██▒  ▒██ ██░▒██░  ██▒░ ▓██▄   \n"
"    ░▓█▄   ▌░██░  ░ ▐██▓░▒██   ██░  ▒   ██▒\n"
"    ░▒████▓ ░██░  ░ ██▒▓░░ ████▓▒░▒██████▒▒\n"
"     ▒▒▓  ▒ ░▓     ██▒▒▒ ░ ▒░▒░▒░ ▒ ▒▓▒ ▒ ░\n"
"     ░ ▒  ▒  ▒ ░ ▓██ ░▒░   ░ ▒ ▒░ ░ ░▒  ░ ░\n"
"     ░ ░  ░  ▒ ░ ▒ ▒ ░░  ░ ░ ░ ▒  ░  ░  ░  \n"
"       ░     ░   ░ ░         ░ ░        ░  \n"
"     ░           ░ ░     \n"
};

uint8_t* art_logo_shadow = {
"    ██████╗ ██╗██╗   ██╗ ██████╗ ███████╗\n"
"    ██╔══██╗██║╚██╗ ██╔╝██╔═══██╗██╔════╝\n"
"    ██║  ██║██║ ╚████╔╝ ██║   ██║███████╗\n"
"    ██║  ██║██║  ╚██╔╝  ██║   ██║╚════██║\n"
"    ██████╔╝██║   ██║   ╚██████╔╝███████║\n"
"    ╚═════╝ ╚═╝   ╚═╝    ╚═════╝ ╚══════╝\n"
};

/***
 *                                                ___           ___
 *         _____                                 /\  \         /\__\
 *        /::\  \       ___           ___       /::\  \       /:/ _/_
 *       /:/\:\  \     /\__\         /|  |     /:/\:\  \     /:/ /\  \
 *      /:/  \:\__\   /:/__/        |:|  |    /:/  \:\  \   /:/ /::\  \
 *     /:/__/ \:|__| /::\  \        |:|  |   /:/__/ \:\__\ /:/_/:/\:\__\
 *     \:\  \ /:/  / \/\:\  \__   __|:|__|   \:\  \ /:/  / \:\/:/ /:/  /
 *      \:\  /:/  /   ~~\:\/\__\ /::::\  \    \:\  /:/  /   \::/ /:/  /
 *       \:\/:/  /       \::/  / ~~~~\:\  \    \:\/:/  /     \/_/:/  /
 *        \::/  /        /:/  /       \:\__\    \::/  /        /:/  /
 *         \/__/         \/__/         \/__/     \/__/         \/__/
 */
uint8_t* art_logo_iso = {
"                                                 ___           ___     \n"
"          _____                                 /\\  \\         /\\__\\    \n"
"         /::\\  \\       ___           ___       /::\\  \\       /:/ _/_   \n"
"        /:/\\:\\  \\     /\\__\\         /|  |     /:/\\:\\  \\     /:/ /\\  \\  \n"
"       /:/  \\:\\__\\   /:/__/        |:|  |    /:/  \\:\\  \\   /:/ /::\\  \\ \n"
"      /:/__/ \\:|__| /::\\  \\        |:|  |   /:/__/ \\:\\__\\ /:/_/:/\\:\\__\\\n"
"      \\:\\  \\ /:/  / \\/\\:\\  \\__   __|:|__|   \\:\\  \\ /:/  / \\:\\/:/ /:/  /\n"
"       \\:\\  /:/  /   ~~\\:\\/\\__\\ /::::\\  \\    \\:\\  /:/  /   \\::/ /:/  / \n"
"        \\:\\/:/  /       \\::/  / ~~~~\\:\\  \\    \\:\\/:/  /     \\/_/:/  /  \n"
"         \\::/  /        /:/  /       \\:\\__\\    \\::/  /        /:/  /   \n"
"          \\/__/         \\/__/         \\/__/     \\/__/         \\/__/    \n"
};



void
art_show() {
    printf("%s\n", art_logo_iso);
}
