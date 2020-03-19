<%! import onlinejudge_template.generator.cplusplus as cplusplus %>\
<%
    data['config']['rep_macro'] = 'REP'
    data['config']['using_namespace_std'] = True
    data['config']['long_long_int'] = 'int64_t'
%>\
#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

${cplusplus.declare_constants(data)}
${cplusplus.return_type(data)} solve(${cplusplus.arguments_types(data)}) {
    // TODO: edit here
}

// generated by online-judge-template-generator (https://github.com/kmyk/online-judge-template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    constexpr char endl = '\n';
${cplusplus.read_input(data)}
    ${cplusplus.return_type(data)} ${cplusplus.return_values(data)} = solve(${cplusplus.arguments(data)});
${cplusplus.write_output(data)}
    return 0;
}
