class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>res;

        double kevin=celsius+273.15;
        double fahrenheit=celsius *1.80 +32.00;

        res.push_back(kevin);
        res.push_back(fahrenheit);

        return res;
        
    }
};