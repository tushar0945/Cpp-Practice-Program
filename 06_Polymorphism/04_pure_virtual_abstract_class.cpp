#include <iostream>
using namespace std;

class PaymentGateway {
public:
    virtual void processPayment(double amount) = 0;
};
class UpiPayment : public PaymentGateway {
public:
    void processPayment(double amt) override { cout << "Paid " << amt << " via UPI" << endl; }
};
int main() { PaymentGateway *p = new UpiPayment(); p->processPayment(500); delete p; return 0; }