#include <string>
#include <iostream>

struct Lab {
    std::string name;
    int id;
};

std::istream& operator>>(std::istream &in, Lab &p) {
    in >> p.id >> p.name;
    return in;
}

std::ostream& operator<<(std::ostream &out, Lab &p) {
    out << "Id: " << p.id << "\nName: \"" << p.name << "\"\n";
    return out;
}

int main() {
    Lab p, q, r, s;
    std::cin >> p >> q >> r >> s;
    std::cout << p << q << r << s;

    return 0;
}