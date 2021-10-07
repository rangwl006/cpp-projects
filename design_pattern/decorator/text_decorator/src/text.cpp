#include "text.h"

#include <iostream>
#include <string>

using std::cout;
using std::endl;

HtmlText::HtmlText(string inputText): Text(), htmlText(inputText)
{

}

void HtmlText::printText()
{
    cout << htmlText << endl;
}

Tag::Tag(Text* text): Text(), _text(text)
{

}

void Tag::printText()
{
    _text->printText();
}

BoldTag::BoldTag(Text* text): Tag(text)
{

}

void BoldTag::printText()
{
    cout << "<b>";
    Tag::printText();
    cout << "</b>";
}
