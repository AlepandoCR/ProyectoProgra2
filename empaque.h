#ifndef EMPAQUE_H
#define EMPAQUE_H

class empaque {
public:
    empaque(bool tripa) : tripa(tripa) {}
    empaque();
    bool isEmpaquetadoConTripa() const;

protected:
    bool tripa;
};

#endif
