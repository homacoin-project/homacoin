#ifndef HOMACOINADDRESSVALIDATOR_H
#define HOMACOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator.
   Corrects near-miss characters and refuses characters that are not part of base58.
 */
class HomacoinAddressValidator : public QValidator
{
    Q_OBJECT

public:
    explicit HomacoinAddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
};

#endif // HOMACOINADDRESSVALIDATOR_H
