vector<string> split(string str, char delim) {
    vector<string> result;
    stringstream ss(str); // Turn the string into a stream.
    string tok;
    
    while(getline(ss, tok, delim)) {
      string curr;
      stringstream tt(tok);
      tt>>curr;
      result.push_back(curr);
    }
    return result;
}