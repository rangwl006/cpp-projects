#pragma once
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// define core class (should just be a template)
class Text
{
    public:
        virtual void printText() = 0;
};

// concrete object based on core class
class HtmlText: public Text
{
    public:
        HtmlText(string inputText);
        void printText();
    
    private:
        string htmlText;
};


class Tag: public Text
{
    public:
        Tag(Text* text);
        void printText();       
    private:
        Text* _text;
};

class BoldTag: public Tag
{
    public:
        BoldTag(Text* text);
        void printText();
};
