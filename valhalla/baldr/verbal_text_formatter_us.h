#ifndef VALHALLA_BALDR_VERBAL_TEXT_FORMATTER_US_H_
#define VALHALLA_BALDR_VERBAL_TEXT_FORMATTER_US_H_

#include <valhalla/baldr/verbal_text_formatter.h>

namespace valhalla {
namespace baldr {

const std::string kInterstatePattern = "(I)([ -])(H)?(\\d{1,3})";
const std::regex kInterstateRegex(kInterstatePattern);
const std::string kInterstateOutPattern = "Interstate $3$4";

class VerbalTextFormatterUs : public VerbalTextFormatter {
 public:
  VerbalTextFormatterUs(const std::string& country_code,
                        const std::string& state_code);

  ~VerbalTextFormatterUs();

  std::string Format(const std::string& text) const;

 protected:

  std::string FormInterstateTts(const std::string& source) const;

};

}
}

#endif  // VALHALLA_BALDR_VERBAL_TEXT_FORMATTER_US_H_
