#ifndef _XCHAT_H_INCLUDED
#define _XCHAT_H_INCLUDED

#include <string>
#include <vector>
#include <map>

namespace xchat {
    using namespace std;

    static const int servers = 5;

    struct x_nick {
	string nick;
	bool muz;
    };

    typedef map<string,bool> nicklist_t;
    struct room {
	int l;
	nicklist_t nicklist;
    };
    typedef map<string,room> rooms_t;

    class XChat {
	public:
	    string uid, sid;

	    XChat(const string& user, const string& pass);
	    ~XChat();

	    room join(const string& rid);
	    void part(const string& rid);
	    int getmsg(const string& rid, int lastmsg, vector<string>& msgs);
	    void putmsg(const string& rid, const string& msg);

	    static string makeurl(const string& url);
	    string makeurl2(const string& url);

	    static void stripdate(string &m);
	    static void getnick(string &m, string &src, string &target);
	    static void striphtmlent(string &m);
    };
}

#endif /* _XCHAT_H_INCLUDED */
