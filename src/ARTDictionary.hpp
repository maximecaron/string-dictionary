#ifndef H_ARTDictionary
#define H_ARTDictionary

#include <string>
#include "IndexART.hpp"
#include "ReverseIndexART.hpp"
#include "Dictionary.hpp"

/**
 * Adaptive Radix Tree dictionary.
 */
class ARTDictionary : public Dictionary {
  private:
    IndexART index;
    IAReverseIndexART reverseIndex;

  public:
    ARTDictionary() : reverseIndex(index) { }
    ~ARTDictionary() noexcept { }
    void insert(std::string value);
};

#endif
