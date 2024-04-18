#ifndef EMPAQUE_H
#define EMPAQUE_H

class empaque {
public:
    empaque(bool tripa) : tripa(tripa) {}

    bool isEmpaquetadoConTripa() const {
        return tripa;
    }

private:
    bool tripa;
};

#endif
