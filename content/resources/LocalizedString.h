#include "base/macros.h"

namespace content {

#define MAKE_UCHAR_TO_WEBSTRING(s) \
    blink::WebString(s, sizeof(s)/sizeof(WebUChar))

blink::WebString queryLocalizedStringFromResources(blink::WebLocalizedString::Name name)
{
    blink::WebString out;
    switch (name) {
    case blink::WebLocalizedString::BlockedPluginText:
        out = MAKE_UCHAR_TO_WEBSTRING(L"�������");
        break;
    case blink::WebLocalizedString::FileButtonChooseFileLabel:
        out = MAKE_UCHAR_TO_WEBSTRING(L"ѡ���ļ�");
        break;
    case blink::WebLocalizedString::FileButtonChooseMultipleFilesLabel:
        out = MAKE_UCHAR_TO_WEBSTRING(L"ѡ�����ļ�");
        break;
    case blink::WebLocalizedString::FileButtonNoFileSelectedLabel:
        out = MAKE_UCHAR_TO_WEBSTRING(L"û���ļ���ѡ��");
        break;
    case blink::WebLocalizedString::InputElementAltText:
        out = MAKE_UCHAR_TO_WEBSTRING(L"AltText");
        break;
    case blink::WebLocalizedString::MissingPluginText:
        out = MAKE_UCHAR_TO_WEBSTRING(L"ȱ�ٲ��");
        break;
    case blink::WebLocalizedString::MultipleFileUploadText:
        out = MAKE_UCHAR_TO_WEBSTRING(L"�ϴ��ļ�");
        break;
    case blink::WebLocalizedString::OtherColorLabel:
        out = MAKE_UCHAR_TO_WEBSTRING(L"������ɫ");
        break;
    case blink::WebLocalizedString::OtherDateLabel:
        out = MAKE_UCHAR_TO_WEBSTRING(L"��������");
        break;
    case blink::WebLocalizedString::OtherMonthLabel:
        out = MAKE_UCHAR_TO_WEBSTRING(L"�����·�");
        break;
    case blink::WebLocalizedString::ResetButtonDefaultLabel:
        out = MAKE_UCHAR_TO_WEBSTRING(L"����");
        break;
    case blink::WebLocalizedString::SearchableIndexIntroduction:
        out = MAKE_UCHAR_TO_WEBSTRING(L"SearchableIndexIntroduction");
        break;
    case blink::WebLocalizedString::SearchMenuClearRecentSearchesText:
        out = MAKE_UCHAR_TO_WEBSTRING(L"SearchMenuClearRecentSearchesText");
        break;
    case blink::WebLocalizedString::SelectMenuListText:
        out = MAKE_UCHAR_TO_WEBSTRING(L"ѡ��˵�");
        break;
    case blink::WebLocalizedString::SubmitButtonDefaultLabel:
        out = MAKE_UCHAR_TO_WEBSTRING(L"�ύ");
        break;
    case blink::WebLocalizedString::ThisMonthButtonLabel:
        out = MAKE_UCHAR_TO_WEBSTRING(L"����");
        break;
    case blink::WebLocalizedString::ThisWeekButtonLabel:
        out = MAKE_UCHAR_TO_WEBSTRING(L"����");
        break;
    }

    return out;
}

#undef MAKE_UCHAR_TO_WEBSTRING

} // namespace content