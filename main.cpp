#include <iostream>
#include <list>

using namespace std;

class Product
{
private:
    string model;
public:
    Product()
    {
        model = "default product";
    }

    Product(string model)
    {
        this->model = model;
    }

    void setModel(string model)
    {
        this->model = model;
    }

    string getModel()
    {
        return model;
    }
};


bool compare(Product a, Product b)
{
    return a.getModel() < b.getModel();  // this funnction
}

using namespace std;

int main()
{
    list<Product> product;

    product.push_back(Product("Computer"));
    product.push_back(Product("Car"));
    product.push_back(Product("Cartridge"));
    product.push_back(Product("Doll"));
    product.push_back(Product("Watch"));
    product.push_back(Product("Pen"));

    product.sort([](Product a, Product b) {return a.getModel() < b.getModel();}); // lambda version
    // and this is an amazing one, it's like to declare a function, like an argument

    product.sort(compare); // normal version

    for (auto it = product.begin(); it != product.end(); it++)
    {
        cout << (*it).getModel() << endl;
    }
}
