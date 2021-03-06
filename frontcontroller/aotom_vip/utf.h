/**************************************************************
 *
 * UTF-8 translation tables for atom_vip driver
 *
 * Translate from offset to double byte segment data
 */

/* Character segment layout:

     aaaaaaa
    fh  j  kb
    f h j k b
    f  hjk  b
     gggimmm
    e  rpn  c
    e r p n c
    er  p  nc
     ddddddd
 
                 7 6 5 4 3 2 1 0 
  address 0 8bit g i m c r p n e
  address 1 7bit   d a b f k j h

  segment a = A1  32 0x20
  segment b = A1  16 0x10
  segment c = A0  16 0x10
  segment d = A1  64 0x40
  segment e = A0   1 0x01
  segment f = A1   8 0x08
  segment g = A0 128 0x80

  segment h = A1   1 0x01
  segment i = A0  64 0x40
  segment j = A1   2 0x02
  segment k = A1   4 0x04
  segment m = A0  32 0x20
  segment n = A0   2 0x02
  segment p = A0   4 0x04
  segment r = A0   8 0x08
*/

unsigned char UTF_C2[64][2] =
{
	{ 0x00, 0x00 },  //0x80, nonprintable control
	{ 0x00, 0x00 },  //0x81, nonprintable control
	{ 0x00, 0x00 },  //0x82, nonprintable control
	{ 0x00, 0x00 },  //0x83, nonprintable control
	{ 0x00, 0x00 },  //0x84, nonprintable control
	{ 0x00, 0x00 },  //0x85, nonprintable control
	{ 0x00, 0x00 },  //0x86, nonprintable control
	{ 0x00, 0x00 },  //0x87, nonprintable control
	{ 0x00, 0x00 },  //0x88, nonprintable control
	{ 0x00, 0x00 },  //0x89, nonprintable control
	{ 0x00, 0x00 },  //0x8a, nonprintable control
	{ 0x00, 0x00 },  //0x8b, nonprintable control
	{ 0x00, 0x00 },  //0x8c, nonprintable control
	{ 0x00, 0x00 },  //0x8d, nonprintable control
	{ 0x00, 0x00 },  //0x8e, nonprintable control
	{ 0x00, 0x00 },  //0x8f, nonprintable control

	{ 0x00, 0x00 },  //0x90, nonprintable control
	{ 0x00, 0x00 },  //0x91, nonprintable control
	{ 0x00, 0x00 },  //0x92, nonprintable control
	{ 0x00, 0x00 },  //0x93, nonprintable control
	{ 0x00, 0x00 },  //0x94, nonprintable control
	{ 0x00, 0x00 },  //0x95, nonprintable control
	{ 0x00, 0x00 },  //0x96, nonprintable control
	{ 0x00, 0x00 },  //0x97, nonprintable control
	{ 0x00, 0x00 },  //0x98, nonprintable control
	{ 0x00, 0x00 },  //0x99, nonprintable control
	{ 0x00, 0x00 },  //0x9a, nonprintable control
	{ 0x00, 0x00 },  //0x9b, nonprintable control
	{ 0x00, 0x00 },  //0x9c, nonprintable control
	{ 0x00, 0x00 },  //0x9d, nonprintable control
	{ 0x00, 0x00 },  //0x9e, nonprintable control
	{ 0x00, 0x00 },  //0x9f, nonprintable control

	{ 0x00, 0x00 },  //0xa0, no break space
	{ 0x04, 0x02 },  //0xa1, inverted exclamation mark
	{ 0xE1, 0x40 },  //0xa2, cent sign
	{ 0x00, 0x00 },  //0xa3, pound sign
	{ 0x00, 0x00 },  //0xa4, currency sign
	{ 0xE4, 0x05 },  //0xa5, yen sign
	{ 0xA0, 0x00 },  //0xa6, broken bar
	{ 0x00, 0x00 },  //0xa7, section sign
	{ 0x00, 0x00 },  //0xa8, diaeresis
	{ 0xE1, 0x40 },  //0xa9, copyright sign
	{ 0x00, 0x00 },  //0xaa, feminine ordinal indicator
	{ 0x00, 0x18 },  //0xab, left pointing double angle quotation mark
	{ 0x00, 0x00 },  //0xac, not sign
	{ 0xE0, 0x00 },  //0xad, soft hyphen
	{ 0xE1, 0x00 },  //0xae, registered sign
	{ 0x00, 0x00 },  //0xaf, macron

	{ 0x00, 0x00 },  //0xb0, degree sign
	{ 0xE4, 0x42 },  //0xb1, plus-minus sign
	{ 0x00, 0x00 },  //0xb2, superscript two
	{ 0x00, 0x00 },  //0xb3, superscript three
	{ 0x00, 0x00 },  //0xb4, acute accent
	{ 0x11, 0x40 },  //0xb5, micro sign
	{ 0x00, 0x00 },  //0xb6, pilcrow sign
	{ 0x40, 0x00 },  //0xb7, middle dot
	{ 0x00, 0x00 },  //0xb8, cedilla
	{ 0x00, 0x00 },  //0xb9, superscript one
	{ 0x00, 0x00 },  //0xba, masculine ordinal indicator
	{ 0x00, 0x18 },  //0xbb, right pointing double angle quotation mark
	{ 0x00, 0x00 },  //0xbc, vulgar fraction one quarter
	{ 0x00, 0x00 },  //0xbd, vulgar fraction one half
	{ 0x00, 0x00 },  //0xbe, vulgar fraction three quarters
	{ 0x00, 0x00 }   //0xbf, inverted question mark
};

// Note on accented letters: no attempt has been made to depict
// accents; character is merely replaced by its non-accented counterpart
unsigned char UTF_C3[64][2] =
{
	{ 0xF1, 0x38 },  //0x80, capital A with accent grave
	{ 0xF1, 0x38 },  //0x81, capital A with accent acute
	{ 0xF1, 0x38 },  //0x82, capital A with accent circonflexe
	{ 0xF1, 0x38 },  //0x83, capital A with accent tilde
	{ 0xF1, 0x38 },  //0x84, capital A with accent diaeresis //??
	{ 0xF1, 0x38 },  //0x85, capital A with accent ring above
	{ 0xF1, 0x38 },  //0x86, capital letter AE
	{ 0x01, 0x68 },  //0x87, capital C with cedille
	{ 0xE1, 0x68 },  //0x88, capital E with accent grave
	{ 0xE1, 0x68 },  //0x89, capital E with accent acute
	{ 0xE1, 0x68 },  //0x8a, capital E with accent circonflexe
	{ 0xE1, 0x68 },  //0x8b, capital E with accent diaeresis
	{ 0x44, 0x62 },  //0x8c, capital I with accent grave
	{ 0x44, 0x62 },  //0x8d, capital I with accent acute
	{ 0x44, 0x62 },  //0x8e, capital I with accent circonflexe
	{ 0x44, 0x62 },  //0x8f, capital I with accent diaeresis

	{ 0x54, 0x72 },  //0x90, capital D with dash
	{ 0x53, 0x19 },  //0x91, capital N with accent tilde
	{ 0x11, 0x78 },  //0x92, capital O with accent grave
	{ 0x11, 0x78 },  //0x93, capital O with accent acute
	{ 0x11, 0x78 },  //0x94, capital O with accent circonflexe
	{ 0x11, 0x78 },  //0x95, capital O with accent tilde
	{ 0x11, 0x78 },  //0x96, capital O with accent diaeresis //??
	{ 0x4A, 0x05 },  //0x97, multiplication sign
	{ 0x11, 0x78 },  //0x98, capital O with stroke
	{ 0x11, 0x58 },  //0x99, capital U with accent grave
	{ 0x11, 0x58 },  //0x9a, capital U with accent acute
	{ 0x11, 0x58 },  //0x9b, capital U with accent circonflexe
	{ 0x11, 0x58 },  //0x9c, capital U with accent diaeresis //??
	{ 0x44, 0x05 },  //0x9d, capital Y with accent acute
	{ 0x00, 0x00 },  //0x9e, capital thorn
	{ 0x74, 0x72 },  //0x9f, ringel-S  //??

#if defined(VFD_LOWER_CASE)
	{ 0x78, 0x70 },  //0xa0, small a with accent grave
	{ 0x78, 0x70 },  //0xa1, small a with accent acute
	{ 0x78, 0x70 },  //0xa2, small a with accent circonflexe
	{ 0x78, 0x70 },  //0xa3, small a with accent tilde
	{ 0x78, 0x70 },  //0xa4, small a with accent diaeresis //??
	{ 0x78, 0x70 },  //0xa5, small a with accent ring above
	{ 0x78, 0x70 },  //0xa6, small letter AE
	{ 0xE1, 0x40 },  //0xa7, small c with cedille
	{ 0xE1, 0x78 },  //0xa8, small e with accent grave
	{ 0xE1, 0x78 },  //0xa9, small e with accent acute
	{ 0xE1, 0x78 },  //0xaa, small e with accent circonflexe
	{ 0xE1, 0x78 },  //0xab, small e with accent diaeresis
	{ 0x44, 0x00 },  //0xac, small i with accent grave
	{ 0x44, 0x00 },  //0xad, small i with accent acute
	{ 0x44, 0x00 },  //0xae, small i with accent circonflexe
	{ 0x44, 0x00 },  //0xaf, small i with accent diaeresis

	{ 0xE1, 0x78 },  //0xb0, small letter ETH
	{ 0xF1, 0x00 },  //0xb1, small n with accent tilde
	{ 0xF1, 0x40 },  //0xb2, small o with accent grave
	{ 0xF1, 0x40 },  //0xb3, small o with accent acute
	{ 0xF1, 0x40 },  //0xb4, small o with accent circonflexe
	{ 0xF1, 0x40 },  //0xb5, small o with accent tilde
	{ 0xF1, 0x40 },  //0xb6, small o with accent diaeresis //??
	{ 0xE0, 0x00 },  //0xb7, division sign
	{ 0xF1, 0x40 },  //0xb8, small o with stroke
	{ 0x11, 0x40 },  //0xb9, small u with accent grave
	{ 0x11, 0x40 },  //0xba, small u with accent acute
	{ 0x11, 0x40 },  //0xbb, small u with accent circonflexe
	{ 0x11, 0x40 },  //0xbc, small u with accent diaeresis //??
	{ 0xF0, 0x58 },  //0xbd, small y with accent acute
	{ 0x00, 0x00 },  //0xbe, small letter thorn
	{ 0xF0, 0x58 }   //0xbf, small y with accent diaresis
#else
	{ 0xF1, 0x38 },  //0xa0, small a with accent grave
	{ 0xF1, 0x38 },  //0xa1, small a with accent acute
	{ 0xF1, 0x38 },  //0xa2, small a with accent circonflexe
	{ 0xF1, 0x38 },  //0xa3, small a with accent tilde
	{ 0xF1, 0x38 },  //0xa4, small a with accent diaeresis //??
	{ 0xF1, 0x38 },  //0xa5, small a with accent ring above
	{ 0xF1, 0x38 },  //0xa6, small letter AE
	{ 0x01, 0x68 },  //0xa7, small c with cedille
	{ 0xE1, 0x68 },  //0xa8, small e with accent grave
	{ 0xE1, 0x68 },  //0xa9, small e with accent acute
	{ 0xE1, 0x68 },  //0xaa, small e with accent circonflexe
	{ 0xE1, 0x68 },  //0xab, small e with accent diaeresis
	{ 0x44, 0x62 },  //0xac, small i with accent grave
	{ 0x44, 0x62 },  //0xad, small i with accent acute
	{ 0x44, 0x62 },  //0xae, small i with accent circonflexe
	{ 0x44, 0x62 },  //0xaf, small i with accent diaeresis

	{ 0xE1, 0x68 },  //0xb0, small letter ETH
	{ 0x53, 0x19 },  //0xb1, small n with accent tilde
	{ 0x11, 0x78 },  //0xb2, small o with accent grave
	{ 0x11, 0x78 },  //0xb3, small o with accent acute
	{ 0x11, 0x78 },  //0xb4, small o with accent circonflexe
	{ 0x11, 0x78 },  //0xb5, small o with accent tilde
	{ 0x11, 0x78 },  //0xb6, small o with accent diaeresis //??
	{ 0xE0, 0x00 },  //0xb7, division sign
	{ 0x11, 0x78 },  //0xb8, small o with stroke
	{ 0x11, 0x58 },  //0xb9, small u with accent grave
	{ 0x11, 0x58 },  //0xba, small u with accent acute
	{ 0x11, 0x58 },  //0xbb, small u with accent circonflexe
	{ 0x11, 0x58 },  //0xbc, small u with accent diaeresis //??
	{ 0x44, 0x05 },  //0xbd, small y with accent acute
	{ 0x00, 0x00 },  //0xbe, small letter thorn
	{ 0x44, 0x05 }   //0xbf, small y with accent diaresis
#endif
};

unsigned char UTF_C4[64][2] =
{
#if defined(VFD_LOWER_CASE)
	{ 0xF1, 0x38 },  //0x80, capital A with accent macron
	{ 0x78, 0x70 },  //0x81, small a with accent macron
	{ 0xF1, 0x38 },  //0x82, capital A with accent breve
	{ 0x78, 0x70 },  //0x83, small a with accent breve
	{ 0xF1, 0x38 },  //0x84, capital A with accent ogonek (polish accented A)
	{ 0x78, 0x70 },  //0x85, small a with accent ogonek (polish acccented a)
	{ 0x01, 0x68 },  //0x86, capital C with accent acute (polish accented C)
	{ 0xE1, 0x40 },  //0x87, small c with accent acute (polish accented c)
	{ 0x01, 0x68 },  //0x88, capital C with accent circonflexe
	{ 0xE1, 0x40 },  //0x89, small c with accent circonflexe
	{ 0x01, 0x68 },  //0x8a, capital C with dot above
	{ 0xE1, 0x40 },  //0x8b, small c with dot above
	{ 0x01, 0x68 },  //0x8c, capital C with accent caron
	{ 0xE1, 0x40 },  //0x8d, small c with accent caron
	{ 0x54, 0x72 },  //0x8e, capital D with accent caron
	{ 0xF1, 0x50 },  //0x8f, small d with accent caron

	{ 0x54, 0x72 },  //0x90, capital D with stroke
	{ 0xF1, 0x50 },  //0x91, small d with stroke
	{ 0xE1, 0x68 },  //0x92, capital E with accent macron
	{ 0xE1, 0x78 },  //0x93, small e with accent macron
	{ 0xE1, 0x68 },  //0x94, capital E with accent breve
	{ 0xE1, 0x78 },  //0x95, small e with accent breve
	{ 0xE1, 0x68 },  //0x96, capital E with dot above
	{ 0xE1, 0x78 },  //0x97, small e with dot above
	{ 0xE1, 0x68 },  //0x98, capital E with accent ogonek (polish accented E)
	{ 0xE1, 0x78 },  //0x99, small e with accent ogonek (polish accented E)
	{ 0xE1, 0x68 },  //0x9a, capital E with accent caron
	{ 0xE1, 0x78 },  //0x9b, small e with accent caron
	{ 0x71, 0x68 },  //0x9c, capital G with accent circonflexe
	{ 0xF0, 0x78 },  //0x9d, small g with accent circonflexe
	{ 0x71, 0x68 },  //0x9e, capital G with accent breve
	{ 0xF0, 0x78 },  //0x9f, small g with accent breve

	{ 0x71, 0x68 },  //0xa0, capital G with dot above
	{ 0xF0, 0x78 },  //0xa1, small g with dot above
	{ 0x71, 0x68 },  //0xa2, capital G with cedille
	{ 0xF0, 0x78 },  //0xa3, small g with cedille
	{ 0xF1, 0x18 },  //0xa4, capital H with accent circonflexe
	{ 0xF1, 0x08 },  //0xa5, small h with accent circonflexe
	{ 0xF1, 0x18 },  //0xa6, capital H with stroke
	{ 0xF1, 0x08 },  //0xa7, small h with stroke
	{ 0x44, 0x62 },  //0xa8, capital I with tilde
	{ 0x44, 0x00 },  //0xa9, small i with tilde
	{ 0x44, 0x62 },  //0xaa, capital I with accent macron
	{ 0x44, 0x00 },  //0xab, small i with accent macron
	{ 0x44, 0x62 },  //0xac, capital I with accent breve
	{ 0x44, 0x00 },  //0xad, small i with accent breve
	{ 0x44, 0x62 },  //0xae, capital I with accent ogonek
	{ 0x44, 0x00 },  //0xaf, small i with accent ogonek

	{ 0x44, 0x62 },  //0xb0, capital I with dot above
	{ 0x44, 0x00 },  //0xb1, small i without dot
	{ 0x44, 0x05 },  //0xb2, capital IJ
	{ 0xF0, 0x58 },  //0xb3, small ij
	{ 0x11, 0x70 },  //0xb4, capital J with accent circonflexe
	{ 0x10, 0x50 },  //0xb5, small j with accent circonflexe
	{ 0xC3, 0x0C },  //0xb6, capital K with cedille
	{ 0xE3, 0x08 },  //0xb7, small k with cedille
	{ 0xE3, 0x08 },  //0xb8, small letter kra
	{ 0x01, 0x48 },  //0xb9, capital L with accent acute
	{ 0x44, 0x02 },  //0xba, small l with accent acute
	{ 0x01, 0x48 },  //0xbb, capital L with cedille
	{ 0x44, 0x02 },  //0xbc, small l with  cedille
	{ 0x01, 0x48 },  //0xbd, capital L with accent caron
	{ 0x44, 0x02 },  //0xbe, small l with accent caron
	{ 0x01, 0x48 },   //0xbf, capital L with middle dot
};

unsigned char UTF_C5[64][2] =
{
	{ 0x44, 0x02 },  //0x80, small l with middle dot
	{ 0x01, 0x48 },  //0x81, capital L with stroke (polish accented L)
	{ 0x44, 0x02 },  //0x82, small l with stroke (polish accented l)
	{ 0x53, 0x19 },  //0x83, capital N with accent acute (polish accented N)
	{ 0xF1, 0x00 },  //0x84, small n with accent acute (polish accented n)
	{ 0x53, 0x19 },  //0x85, capital N with cedille
	{ 0xF1, 0x00 },  //0x86, small n with cedille
	{ 0x53, 0x19 },  //0x87, capital N with accent caron
	{ 0xF1, 0x00 },  //0x88, small n with accent caron
	{ 0x53, 0x19 },  //0x89, small n with apostrofe in front
	{ 0x00, 0x00 },  //0x8a, capital letter eng
	{ 0x00, 0x00 },  //0x8b, small letter eng
	{ 0x11, 0x78 },  //0x8c, capital O with macron
	{ 0xF1, 0x40 },  //0x8d, small o with macron
	{ 0x11, 0x78 },  //0x8e, capital O with breve
	{ 0xF1, 0x40 },  //0x8f, small o with breve

	{ 0x11, 0x78 },  //0x90, capital O with double accent acute
	{ 0xF1, 0x40 },  //0x91, small o with double accent acute
	{ 0x11, 0x78 },  //0x92, capital OE
	{ 0xF1, 0x40 },  //0x93, small oe
	{ 0xE3, 0x38 },  //0x94, capital R with accent acute
	{ 0xE1, 0x00 },  //0x95, small r with accent acute
	{ 0xE3, 0x38 },  //0x96, capital R with accent acute
	{ 0xE1, 0x00 },  //0x97, small r with accent acute
	{ 0xE3, 0x38 },  //0x98, capital R with accent caron
	{ 0xE1, 0x00 },  //0x99, small r with accent caron
	{ 0xF0, 0x68 },  //0x9a, capital S with accent acute (polish accented S)
	{ 0xF0, 0x68 },  //0x9b, small s with accent acute (polish accented s)
	{ 0xF0, 0x68 },  //0x9c, capital S with accent circonflexe
	{ 0xF0, 0x68 },  //0x9d, small s with accent circonflexe
	{ 0xF0, 0x68 },  //0x9e, capital S with cedille
	{ 0xF0, 0x68 },  //0x9f, small s with cedille

	{ 0xF0, 0x68 },  //0xa0, capital S with caron
	{ 0xF0, 0x68 },  //0xa1, small s with caron
	{ 0x44, 0x22 },  //0xa2, capital T with cedille
	{ 0xC1, 0x48 },  //0xa3, small t with cedille
	{ 0x44, 0x22 },  //0xa4, capital T with caron
	{ 0xC1, 0x48 },  //0xa5, small t with caron
	{ 0x44, 0x22 },  //0xa6, capital T with stroke
	{ 0xC1, 0x48 },  //0xa7, small t with stroke
	{ 0x11, 0x58 },  //0xa8, capital U with tilde
	{ 0x11, 0x40 },  //0xa9, small u with tilde
	{ 0x11, 0x58 },  //0xaa, capital U with macron
	{ 0x11, 0x40 },  //0xab, small u with macron
	{ 0x11, 0x58 },  //0xac, capital U with breve
	{ 0x11, 0x40 },  //0xad, small u with breve
	{ 0x11, 0x58 },  //0xae, capital U with ring above
	{ 0x11, 0x40 },  //0xaf, small u with ring above

	{ 0x11, 0x58 },  //0xb0, capital U with double accent acute
	{ 0x11, 0x40 },  //0xb1, small u with double accent acute
	{ 0x11, 0x58 },  //0xb2, capital U with ogonek
	{ 0x11, 0x40 },  //0xb3, small u with ogonek
	{ 0x5B, 0x18 },  //0xb4, capital W with accent circonflexe
	{ 0x15, 0x40 },  //0xb5, small w with accent circonflexe
	{ 0x44, 0x05 },  //0xb6, capital Y with accent circonflexe
	{ 0xF0, 0x58 },  //0xb7, small y with accent circonflexe
	{ 0x5B, 0x18 },  //0xb8, capital W with accent diaeresis
	{ 0x48, 0x64 },  //0xb9, capital Z with accent acute (polish accented Zi)
	{ 0x48, 0x64 },  //0xba, small z with accent acute (polish accented zi)
	{ 0x48, 0x64 },  //0xbb, capital Z with dot above (polish accented Z)
	{ 0x48, 0x64 },  //0xbc, small z with dot above (polish accented z)
	{ 0x48, 0x64 },  //0xbd, capital Z with accent caron
	{ 0x48, 0x64 },  //0xbe, small z with accent caron
	{ 0xF0, 0x68 }   //0xbf, small long s
#else
	{ 0xF1, 0x38 },  //0x80, capital A with accent macron
	{ 0xF1, 0x38 },  //0x81, small a with accent macron
	{ 0xF1, 0x38 },  //0x82, capital A with accent breve
	{ 0xF1, 0x38 },  //0x83, small a with accent breve
	{ 0xF1, 0x38 },  //0x84, capital A with accent ogonek (polish accented A)
	{ 0xF1, 0x38 },  //0x85, small a with accent ogonek (polish acccented a)
	{ 0x01, 0x68 },  //0x86, capital C with accent acute (polish accented C)
	{ 0x01, 0x68 },  //0x87, small c with accent acute (polish accented c)
	{ 0x01, 0x68 },  //0x88, capital C with accent circonflexe
	{ 0x01, 0x68 },  //0x89, small c with accent circonflexe
	{ 0x01, 0x68 },  //0x8a, capital C with dot above
	{ 0x01, 0x68 },  //0x8b, small c with dot above
	{ 0x01, 0x68 },  //0x8c, capital C with accent caron
	{ 0x01, 0x68 },  //0x8d, small c with accent caron
	{ 0x54, 0x72 },  //0x8e, capital D with accent caron
	{ 0x54, 0x72 },  //0x8f, small d with accent caron

	{ 0x54, 0x72 },  //0x90, capital D with stroke
	{ 0x54, 0x72 },  //0x91, small d with stroke
	{ 0xE1, 0x68 },  //0x92, capital E with accent macron
	{ 0xE1, 0x68 },  //0x93, small e with accent macron
	{ 0xE1, 0x68 },  //0x94, capital E with accent breve
	{ 0xE1, 0x68 },  //0x95, small e with accent breve
	{ 0xE1, 0x68 },  //0x96, capital E with dot above
	{ 0xE1, 0x68 },  //0x97, small e with dot above
	{ 0xE1, 0x68 },  //0x98, capital E with accent ogonek (polish accented E)
	{ 0xE1, 0x68 },  //0x99, small e with accent ogonek (polish accented E)
	{ 0xE1, 0x68 },  //0x9a, capital E with accent caron
	{ 0xE1, 0x68 },  //0x9b, small e with accent caron
	{ 0x71, 0x68 },  //0x9c, capital G with accent circonflexe
	{ 0x71, 0x68 },  //0x9d, small g with accent circonflexe
	{ 0x71, 0x68 },  //0x9e, capital G with accent breve
	{ 0x71, 0x68 },  //0x9f, small g with accent breve

	{ 0x71, 0x68 },  //0xa0, capital G with dot above
	{ 0x71, 0x68 },  //0xa1, small g with dot above
	{ 0x71, 0x68 },  //0xa2, capital G with cedille
	{ 0x71, 0x68 },  //0xa3, small g with cedille
	{ 0xF1, 0x18 },  //0xa4, capital H with accent circonflexe
	{ 0xF1, 0x18 },  //0xa5, small h with accent circonflexe
	{ 0xF1, 0x18 },  //0xa6, capital H with stroke
	{ 0xF1, 0x18 },  //0xa7, small h with stroke
	{ 0x44, 0x62 },  //0xa8, capital I with tilde
	{ 0x44, 0x62 },  //0xa9, small i with tilde
	{ 0x44, 0x62 },  //0xaa, capital I with accent macron
	{ 0x44, 0x62 },  //0xab, small i with accent macron
	{ 0x44, 0x62 },  //0xac, capital I with accent breve
	{ 0x44, 0x62 },  //0xad, small i with accent breve
	{ 0x44, 0x62 },  //0xae, capital I with accent ogonek
	{ 0x44, 0x62 },  //0xaf, small i with accent ogonek

	{ 0x44, 0x62 },  //0xb0, capital I with dot above
	{ 0x44, 0x62 },  //0xb1, small i without dot
	{ 0x44, 0x05 },  //0xb2, capital IJ
	{ 0x44, 0x05 },  //0xb3, small ij
	{ 0x11, 0x70 },  //0xb4, capital J with accent circonflexe
	{ 0x11, 0x70 },  //0xb5, small j with accent circonflexe
	{ 0xC3, 0x0C },  //0xb6, capital K with cedille
	{ 0xC3, 0x0C },  //0xb7, small k with cedille
	{ 0xC3, 0x0C },  //0xb8, small letter kra
	{ 0x01, 0x48 },  //0xb9, capital L with accent acute
	{ 0x01, 0x48 },  //0xba, small l with accent acute
	{ 0x01, 0x48 },  //0xbb, capital L with cedille
	{ 0x01, 0x48 },  //0xbc, small l with  cedille
	{ 0x01, 0x48 },  //0xbd, capital L with accent caron
	{ 0x01, 0x48 },  //0xbe, small l with accent caron
	{ 0x01, 0x48 },   //0xbf, capital L with middle dot
};

unsigned char UTF_C5[64][2] =
{
	{ 0x01, 0x48 },  //0x80, small l with middle dot
	{ 0x01, 0x48 },  //0x81, capital L with stroke (polish accented L)
	{ 0x01, 0x48 },  //0x82, small l with stroke (polish accented l)
	{ 0x53, 0x19 },  //0x83, capital N with accent acute (polish accented N)
	{ 0x53, 0x19 },  //0x84, small n with accent acute (polish accented n)
	{ 0x53, 0x19 },  //0x85, capital N with cedille
	{ 0x53, 0x19 },  //0x86, small n with cedille
	{ 0x53, 0x19 },  //0x87, capital N with accent caron
	{ 0x53, 0x19 },  //0x88, small n with accent caron
	{ 0x53, 0x19 },  //0x89, small n with apostrofe in front
	{ 0x00, 0x00 },  //0x8a, capital letter eng
	{ 0x00, 0x00 },  //0x8b, small letter eng
	{ 0x11, 0x78 },  //0x8c, capital O with macron
	{ 0x11, 0x78 },  //0x8d, small o with macron
	{ 0x11, 0x78 },  //0x8e, capital O with breve
	{ 0x11, 0x78 },  //0x8f, small o with breve

	{ 0x11, 0x78 },  //0x90, capital O with double accent acute
	{ 0x11, 0x78 },  //0x91, small o with double accent acute
	{ 0x11, 0x78 },  //0x92, capital OE
	{ 0x11, 0x78 },  //0x93, small oe
	{ 0xE3, 0x38 },  //0x94, capital R with accent acute
	{ 0xE3, 0x38 },  //0x95, small r with accent acute
	{ 0xE3, 0x38 },  //0x96, capital R with accent acute
	{ 0xE3, 0x38 },  //0x97, small r with accent acute
	{ 0xE3, 0x38 },  //0x98, capital R with accent caron
	{ 0xE3, 0x38 },  //0x99, small r with accent caron
	{ 0xF0, 0x68 },  //0x9a, capital S with accent acute (polish accented S)
	{ 0xF0, 0x68 },  //0x9b, small s with accent acute (polish accented s)
	{ 0xF0, 0x68 },  //0x9c, capital S with accent circonflexe
	{ 0xF0, 0x68 },  //0x9d, small s with accent circonflexe
	{ 0xF0, 0x68 },  //0x9e, capital S with cedille
	{ 0xF0, 0x68 },  //0x9f, small s with cedille

	{ 0xF0, 0x68 },  //0xa0, capital S with caron
	{ 0xF0, 0x68 },  //0xa1, small s with caron
	{ 0x44, 0x22 },  //0xa2, capital T with cedille
	{ 0x44, 0x22 },  //0xa3, small t with cedille
	{ 0x44, 0x22 },  //0xa4, capital T with caron
	{ 0x44, 0x22 },  //0xa5, small t with caron
	{ 0x44, 0x22 },  //0xa6, capital T with stroke
	{ 0x44, 0x22 },  //0xa7, small t with stroke
	{ 0x11, 0x58 },  //0xa8, capital U with tilde
	{ 0x11, 0x58 },  //0xa9, small u with tilde
	{ 0x11, 0x58 },  //0xaa, capital U with macron
	{ 0x11, 0x58 },  //0xab, small u with macron
	{ 0x11, 0x58 },  //0xac, capital U with breve
	{ 0x11, 0x58 },  //0xad, small u with breve
	{ 0x11, 0x58 },  //0xae, capital U with ring above
	{ 0x11, 0x58 },  //0xaf, small u with ring above

	{ 0x11, 0x58 },  //0xb0, capital U with double accent acute
	{ 0x11, 0x58 },  //0xb1, small u with double accent acute
	{ 0x11, 0x58 },  //0xb2, capital U with ogonek
	{ 0x11, 0x58 },  //0xb3, small u with ogonek
	{ 0x5B, 0x18 },  //0xb4, capital W with accent circonflexe
	{ 0x5B, 0x18 },  //0xb5, small w with accent circonflexe
	{ 0x44, 0x05 },  //0xb6, capital Y with accent circonflexe
	{ 0x44, 0x05 },  //0xb7, small y with accent circonflexe
	{ 0x5B, 0x18 },  //0xb8, capital W with accent diaeresis
	{ 0x48, 0x64 },  //0xb9, capital Z with accent acute (polish accented Zi)
	{ 0x48, 0x64 },  //0xba, small z with accent acute (polish accented zi)
	{ 0x48, 0x64 },  //0xbb, capital Z with dot above (polish accented Z)
	{ 0x48, 0x64 },  //0xbc, small z with dot above (polish accented z)
	{ 0x48, 0x64 },  //0xbd, capital Z with accent caron
	{ 0x48, 0x64 },  //0xbe, small z with accent caron
	{ 0xF0, 0x68 }   //0xbf, small long s
#endif
};

unsigned char UTF_D0[64][2] =
{
	{ 0x00, 0x00 },  //0x80,
	{ 0x00, 0x00 },  //0x81,
	{ 0x00, 0x00 },  //0x82,
	{ 0x00, 0x00 },  //0x83,
	{ 0x00, 0x00 },  //0x84,
	{ 0x00, 0x00 },  //0x85,
	{ 0x00, 0x00 },  //0x86,
	{ 0x00, 0x00 },  //0x87,
	{ 0x00, 0x00 },  //0x88,
	{ 0x00, 0x00 },  //0x89,
	{ 0x00, 0x00 },  //0x8a,
	{ 0x00, 0x00 },  //0x8b,
	{ 0x00, 0x00 },  //0x8c,
	{ 0x00, 0x00 },  //0x8d,
	{ 0x00, 0x00 },  //0x8e,
	{ 0x00, 0x00 },  //0x8f,

	{ 0xF1, 0x38 },  //0x90, ??, Cyrillic start
	{ 0xF1, 0x68 },  //0x91, ??
	{ 0xC3, 0x6C },  //0x92, ??
	{ 0x01, 0x28 },  //0x93, ??
	{ 0x54, 0x72 },  //0x94, ??
	{ 0xE1, 0x68 },  //0x95, ??
	{ 0x4E, 0x07 },  //0x96, ??
	{ 0x42, 0x64 },  //0x97, ??
	{ 0x59, 0x1C },  //0x98, ??
	{ 0x59, 0x1C },  //0x99, ??
	{ 0xC3, 0x0C },  //0x9a, ??
	{ 0x58, 0x14 },  //0x9b, ??
	{ 0x51, 0x1D },  //0x9c, ??
	{ 0xF1, 0x18 },  //0x9d, ??
	{ 0x11, 0x78 },  //0x9e, ??
	{ 0x11, 0x38 },  //0x9f, ??

	{ 0xE1, 0x38 },  //0xa0, ??
	{ 0x01, 0x68 },  //0xa1, ??
	{ 0x44, 0x22 },  //0xa2, ??
	{ 0xF0, 0x58 },  //0xa3, ??
	{ 0x55, 0x7A },  //0xa4, ??
	{ 0x4A, 0x05 },  //0xa5, ??
	{ 0x05, 0x4A },  //0xa6, ??
	{ 0xF0, 0x18 },  //0xa7, ??
	{ 0x55, 0x5A },  //0xa8, ??
	{ 0x55, 0x5A },  //0xa9, ??
	{ 0x71, 0x48 },  //0xaa, ??
	{ 0xD5, 0x58 },  //0xab, ??
	{ 0x71, 0x48 },  //0xac, ??
	{ 0x70, 0x70 },  //0xad, ??
	{ 0xD3, 0x1C },  //0xae, ??
	{ 0x78, 0x38 },  //0xaf, ??

	{ 0xF1, 0x38 },  //0xb0, ??
	{ 0xF1, 0x68 },  //0xb1, ??
	{ 0xC3, 0x6C },  //0xb2, ??
	{ 0x01, 0x28 },  //0xb3, ??
	{ 0x54, 0x72 },  //0xb4, ??
	{ 0xE1, 0x68 },  //0xb5, ??
	{ 0x4E, 0x07 },  //0xb6, ??
	{ 0x42, 0x64 },  //0xb7, ??
	{ 0x59, 0x1C },  //0xb8, ??
	{ 0x59, 0x1C },  //0xb9, ??
	{ 0xC3, 0x0C },  //0xba, ??
	{ 0x58, 0x14 },  //0xbb, ??
	{ 0x51, 0x1D },  //0xbc, ??
	{ 0xF1, 0x18 },  //0xbd, ??
	{ 0x11, 0x78 },  //0xbe, ??
	{ 0x11, 0x38 }   //0xbf, ??
};

unsigned char UTF_D1[64][2] =
{
	{ 0xE1, 0x38 },  //0x80, ??
	{ 0x01, 0x68 },  //0x81, ??
	{ 0x44, 0x22 },  //0x82, ??
	{ 0xF0, 0x58 },  //0x83, ??
	{ 0x55, 0x7A },  //0x84, ??
	{ 0x4A, 0x05 },  //0x85, ??
	{ 0x05, 0x4A },  //0x86, ??
	{ 0xF0, 0x18 },  //0x87, ??
	{ 0x55, 0x5A },  //0x88, ??
	{ 0x55, 0x5A },  //0x89, ??
	{ 0x71, 0x48 },  //0x8a, ??
	{ 0xD5, 0x58 },  //0x8b, ??
	{ 0x71, 0x48 },  //0x8c, ??
	{ 0x70, 0x70 },  //0x8d, ??
	{ 0xD3, 0x1C },  //0x8e, ??
	{ 0x78, 0x38 },  //0x8f, ??, Cyrillic end

	{ 0x00, 0x00 },  //0x90,
	{ 0x00, 0x00 },  //0x91,
	{ 0x00, 0x00 },  //0x92,
	{ 0x00, 0x00 },  //0x93,
	{ 0x00, 0x00 },  //0x94,
	{ 0x00, 0x00 },  //0x95,
	{ 0x00, 0x00 },  //0x96,
	{ 0x00, 0x00 },  //0x97,
	{ 0x00, 0x00 },  //0x98,
	{ 0x00, 0x00 },  //0x99,
	{ 0x00, 0x00 },  //0x9a,
	{ 0x00, 0x00 },  //0x9b,
	{ 0x00, 0x00 },  //0x9c,
	{ 0x00, 0x00 },  //0x9d,
	{ 0x00, 0x00 },  //0x9e,
	{ 0x00, 0x00 },  //0x9f,

	{ 0x00, 0x00 },  //0xa0,
	{ 0x00, 0x00 },  //0xa1,
	{ 0x00, 0x00 },  //0xa2,
	{ 0x00, 0x00 },  //0xa3,
	{ 0x00, 0x00 },  //0xa4,
	{ 0x00, 0x00 },  //0xa5,
	{ 0x00, 0x00 },  //0xa6,
	{ 0x00, 0x00 },  //0xa7,
	{ 0x00, 0x00 },  //0xa8,
	{ 0x00, 0x00 },  //0xa9,
	{ 0x00, 0x00 },  //0xaa,
	{ 0x00, 0x00 },  //0xab,
	{ 0x00, 0x00 },  //0xac,
	{ 0x00, 0x00 },  //0xad,
	{ 0x00, 0x00 },  //0xae,
	{ 0x00, 0x00 },  //0xaf,

	{ 0x00, 0x00 },  //0xb0,
	{ 0x00, 0x00 },  //0xb1,
	{ 0x00, 0x00 },  //0xb2,
	{ 0x00, 0x00 },  //0xb3,
	{ 0x00, 0x00 },  //0xb4,
	{ 0x00, 0x00 },  //0xb5,
	{ 0x00, 0x00 },  //0xb6,
	{ 0x00, 0x00 },  //0xb7,
	{ 0x00, 0x00 },  //0xb8,
	{ 0x00, 0x00 },  //0xb9,
	{ 0x00, 0x00 },  //0xba,
	{ 0x00, 0x00 },  //0xbb,
	{ 0x00, 0x00 },  //0xbc,
	{ 0x00, 0x00 },  //0xbd,
	{ 0x00, 0x00 },  //0xbe,
	{ 0x00, 0x00 }   //0xbf,
};
// vim:ts=4
