/// \class Exception
/// \brief Дочерний класс от std::exception.
class Exception : public std::exception
{
public:
    Exception(const std::string &msg) : msg(msg) {}

    const char *what() const noexcept
    {
        return msg.c_str();
    }

private:
    /// Сообщение исключения
    ///  \var msg
    std::string msg;
};

/// \class InvalidToken
/// \brief Дочерний класс от Exception. Сообщает о проблеме с токеном.
class InvalidToken : public Exception
{
public:
    InvalidToken() : Exception("Невалидный токен или нет соответствующих прав"){};
};

/// \class IllegalParamType
/// \brief Дочерний класс от Exception. Сообщает о проблеме с параметром type.
class IllegalParamType : public Exception
{
public:
    IllegalParamType() : Exception("Неправильный параметр type"){};
};

/// \class IllegalParamStartRecord
/// \brief Дочерний класс от Exception. Сообщает о проблеме с параметром start_record.
class IllegalParamStartRecord : public Exception
{
public:
    IllegalParamStartRecord() : Exception("Неправильный параметр start_record"){};
};

/// \class IllegalParamRecords
/// \brief Дочерний класс от Exception. Сообщает о проблеме с параметром records.
class IllegalParamRecords : public Exception
{
public:
    IllegalParamRecords() : Exception("Неправильный параметр records"){};
};

/// \class IllegalParamLabel
/// \brief Дочерний класс от Exception. Сообщает о проблеме с параметром label.
class IllegalParamLabel : public Exception
{
public:
    IllegalParamLabel() : Exception("Неправильный параметр label"){};
};

/// \class IllegalParamFromDate
/// \brief Дочерний класс от Exception. Сообщает о проблеме с параметром from_date.
class IllegalParamFromDate : public Exception
{
public:
    IllegalParamFromDate() : Exception("Неправильный параметр from_date"){};
};

/// \class IllegalParamTillDate
/// \brief Дочерний класс от Exception. Сообщает о проблеме с параметром till_date.
class IllegalParamTillDate : public Exception
{
public:
    IllegalParamTillDate() : Exception("Неправильный параметр till_date"){};
};

/// \class Technical
/// \brief Дочерний класс от Exception. Сообщает о технических проблемах.
class Technical : public Exception
{
public:
    Technical() : Exception("Техническая проблема"){};
};

/// \class IllegalParams
/// \brief Дочерний класс от Exception. Сообщает о недопустимых значениях параметров платежа или об их отсутствии.
class IllegalParams : public Exception
{
public:
    IllegalParams(std::string msg) : Exception(msg){};
};

/// \class LimitExceeded
/// \brief Дочерний класс от Exception. Сообщает о превышении лимитов на операцию.
class LimitExceeded : public Exception
{
public:
    LimitExceeded() : Exception("Превышен один из лимитов на операции: на сумму операции для выданного токена авторизации; сумму операции за период времени для выданного токена авторизации; ограничения ЮMoney для различных видов операций"){};
};

/// \class MoneySourceNotAvailable
/// \brief Дочерний класс от Exception. Сообщает, что метод платежа недоступен для данного платежа.
class MoneySourceNotAvailable : public Exception
{
public:
    MoneySourceNotAvailable() : Exception("Запрошенный метод платежа (money_source) недоступен для данного платежа."){};
};

/// \class NotEnoughFunds
/// \brief Дочерний класс от Exception. Сообщает, что недостаточно средств на счете плательщика.
class NotEnoughFunds : public Exception
{
public:
    NotEnoughFunds() : Exception("Недостаточно средств на счете плательщика. Необходимо пополнить счет и провести новый платеж."){};
};
