if (u.size() > 1){
            int n = stoi(u);
            st.push(n);
        }else if (isdigit(u[0])){
            st.push (u[0] - '0');
        }else if (u == "+"){
            int n1 = st.top();
            st.pop();
            int n2 = st.top();
            int sum = n1 + n2;
            st.push(n1);
            st.push(sum);
            }else if (u == "C"){
            st.pop();
            }else if (u == "D"){
            int m = st.top();
            int mal = 2 * m;
            st.push(mal);
            }
        }