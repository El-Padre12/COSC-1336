
#include <iostream>
#include <vector>
#include <bitset>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

vector<string> subnet(string network, int num_subnets) {
    vector<string> subnets;
    
    // Convert the network address to binary
    bitset<32> network_bits(stoul(network, nullptr, 0));

    // Calculate the subnet mask length (prefix length)
     int mask_length = 32 - static_cast<int>(log2(num_subnets)); 

    // Calculate the subnet size
    int subnet_size = 1 << (32 - mask_length);

    // Generate subnets
    for (int i = 0; i < num_subnets; i++) {
        bitset<32> subnet_bits = network_bits;
        // Set the bits for the subnet portion
        for (int j = 31; j >= 32 - mask_length; j--) {
            subnet_bits[j] = ((i >> (31 - j)) & 1);
        }
        // Convert back to string format
        stringstream subnet_stream;
        for (int j = 0; j < 4; j++) {
            int octet = 0;
            for (int k = 0; k < 8; k++) {
                octet = (octet << 1) | subnet_bits[j * 8 + k];
            }
            subnet_stream << octet;
            if (j < 3) subnet_stream << ".";
        }
        subnets.push_back(subnet_stream.str() + "/" + to_string(32 - mask_length));
        
        // Update the network_bits for the next subnet
        network_bits = subnet_bits;
        network_bits = network_bits | (bitset<32>(subnet_size));
    }

    return subnets;
}

int main() {
    string network;
    int num_subnets;

    cout << "Enter network address in CIDR notation (e.g., 192.168.1.0/24): ";
    cin >> network;

    cout << "Enter the number of subnets (4 in your case): ";
    cin >> num_subnets;

    vector<string> subnets = subnet(network, num_subnets);

    cout << "\nSubnets:\n";
    for (const string& subnet : subnets) {
        cout << subnet << endl;
    }

    return 0;
}