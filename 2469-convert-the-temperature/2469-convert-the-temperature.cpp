class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> tmp;
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius*1.80 + 32.00;

        tmp.push_back(kelvin);
        tmp.push_back(fahrenheit);
        return tmp;
    }
};