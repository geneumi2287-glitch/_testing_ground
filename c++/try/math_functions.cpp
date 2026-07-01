#include <iostream>
#include <cmath>


int main(){

    double x, y, z, w, phi, psi, ab, r, s, t;
    
    z = std::max(x, y);
    w = std::min(x, y);

    phi = pow(x, y);
    psi = sqrt(phi);
    ab = abs(z);
    r = round(psi);
    s = ceil(psi);
    t = floor(psi);

    return 0;
}