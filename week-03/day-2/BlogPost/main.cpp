#include <iostream>
#include <string>

class BlogPost {

public:
    std::string authorName;
    std::string title;
    std::string text;
    std::string publicationDate;

    BlogPost(std::string authorN, std::string tit, std::string txt, std::string pubDate) {
        authorName = authorN;
        title = tit;
        text = txt;
        publicationDate = pubDate;

    }
};
int main() {

    BlogPost blogPost1("John Doe", "Lorem Ipsum", "Lorem ipsum dolor sit amet", "2000.05.04.");
    BlogPost blogPost2("Tim Urban", "Wait but why", "A popular long-form, stick-figure-illustrated blog about almost everything.", "2010.10.10.");
    BlogPost blogPost3("William Turton", "One Engineer Is Trying to Get IBM to Reckon With Trump", "Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole organizer profile thing.", "2017.03.28.");
    return 0;
}