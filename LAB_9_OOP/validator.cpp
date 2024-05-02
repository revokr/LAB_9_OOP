#include "exceptie.h"

bool Validator::validate_string(const std::string& s) noexcept {
    for (const char c : s) {
        if (!isalpha(c) && !isspace(c) && !isdigit(c) && !(c == '_'))
            return false;
    }

    return true;
}

string Validator::valideaza(Masina& m) {
    std::string erori;
    if (!validate_string(m.get_nr()))
        erori.append("nr invalid\n");
    if (!validate_string(m.get_producator()))
        erori.append("producator invalid\n");
    if (!validate_string(m.get_model()))
        erori.append("model invalid\n");
    if (!validate_string(m.get_tip()))
        erori.append("tip invalid\n");
    try {
        if (erori.size() != 0)
            throw parcare_exception(erori);
    }
    catch (parcare_exception& e) {
        std::cout << e.get_mesaj() << "\n";
    }
    return erori;
}


