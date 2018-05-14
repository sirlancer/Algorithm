class Solution {
	public:
    	int compress(vector<char>& chars) {
        	int ptr = 0, wptr = 0;
        	while(ptr < chars.size()){
            	char ch = chars[ptr];
            	int f = 0;
            	while(ptr < chars.size() && chars[ptr] == ch){
                	ptr++;
                	f++;
            	}
            	chars[wptr] = ch;
            	wptr++;
            	if(f > 1){
                	string s = to_string(f);
                	for(char c: s){
                    	chars[wptr] = c;
                    	wptr++;
                	}
            	}
        	}
        	return wptr;
    	}
	};