
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_libxmlj_sax_GnomeXMLReader__
#define __gnu_xml_libxmlj_sax_GnomeXMLReader__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace libxmlj
      {
        namespace sax
        {
            class GnomeLocator;
            class GnomeXMLReader;
            class Namespaces;
        }
      }
    }
  }
  namespace org
  {
    namespace xml
    {
      namespace sax
      {
          class ContentHandler;
          class DTDHandler;
          class EntityResolver;
          class ErrorHandler;
          class InputSource;
        namespace ext
        {
            class DeclHandler;
            class LexicalHandler;
        }
      }
    }
  }
}

class gnu::xml::libxmlj::sax::GnomeXMLReader : public ::java::lang::Object
{

public:
  GnomeXMLReader();
  GnomeXMLReader(jboolean, jboolean);
  virtual ::org::xml::sax::ContentHandler * getContentHandler();
  virtual void setContentHandler(::org::xml::sax::ContentHandler *);
  virtual ::org::xml::sax::DTDHandler * getDTDHandler();
  virtual void setDTDHandler(::org::xml::sax::DTDHandler *);
  virtual ::org::xml::sax::EntityResolver * getEntityResolver();
  virtual void setEntityResolver(::org::xml::sax::EntityResolver *);
  virtual ::org::xml::sax::ErrorHandler * getErrorHandler();
  virtual void setErrorHandler(::org::xml::sax::ErrorHandler *);
  virtual jboolean getFeature(::java::lang::String *);
  virtual void setFeature(::java::lang::String *, jboolean);
public: // actually package-private
  static void checkFeatureName(::java::lang::String *);
public:
  virtual ::java::lang::Object * getProperty(::java::lang::String *);
  virtual void setProperty(::java::lang::String *, ::java::lang::Object *);
  virtual ::org::xml::sax::ext::DeclHandler * getDeclarationHandler();
  virtual void setDeclarationHandler(::org::xml::sax::ext::DeclHandler *);
  virtual ::org::xml::sax::ext::LexicalHandler * getLexicalHandler();
  virtual void setLexicalHandler(::org::xml::sax::ext::LexicalHandler *);
public: // actually package-private
  static void checkPropertyName(::java::lang::String *);
public:
  virtual void parse(::java::lang::String *);
  virtual void parse(::org::xml::sax::InputSource *);
public: // actually package-private
  virtual void parseStream(::java::io::InputStream *, JArray< jbyte > *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean, jboolean);
  virtual ::java::lang::String * getURI(::java::lang::String *);
private:
  void startDTD(::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  void externalEntityDecl(::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  void internalEntityDecl(::java::lang::String *, ::java::lang::String *);
  ::java::io::InputStream * resolveEntity(::java::lang::String *, ::java::lang::String *);
  void notationDecl(::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  void attributeDecl(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  void elementDecl(::java::lang::String *, ::java::lang::String *);
  void unparsedEntityDecl(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  void setDocumentLocator(::java::lang::Object *, ::java::lang::Object *);
  void startDocument(jboolean);
  void endDocument();
  void startElement(::java::lang::String *, JArray< ::java::lang::String * > *);
  void endElement(::java::lang::String *);
  void startPrefixMapping(::java::lang::String *, ::java::lang::String *);
  void endPrefixMapping(::java::lang::String *);
  void characters(::java::lang::String *);
  void ignorableWhitespace(::java::lang::String *);
  void processingInstruction(::java::lang::String *, ::java::lang::String *);
  void comment(::java::lang::String *);
  void cdataBlock(::java::lang::String *);
  void warning(::java::lang::String *, jint, jint, ::java::lang::String *, ::java::lang::String *);
  void error(::java::lang::String *, jint, jint, ::java::lang::String *, ::java::lang::String *);
  void fatalError(::java::lang::String *, jint, jint, ::java::lang::String *, ::java::lang::String *);
  static ::java::lang::String * FEATURES_PREFIX;
  static ::java::util::List * RECOGNIZED_FEATURES;
  static ::java::lang::String * PROPERTIES_PREFIX;
  static ::java::util::List * RECOGNIZED_PROPERTIES;
  jboolean __attribute__((aligned(__alignof__( ::java::lang::Object)))) standalone;
  jboolean namespaces;
  jboolean namespacePrefixes;
  jboolean validation;
  ::org::xml::sax::ContentHandler * contentHandler;
  ::org::xml::sax::DTDHandler * dtdHandler;
  ::org::xml::sax::EntityResolver * entityResolver;
  ::org::xml::sax::ErrorHandler * errorHandler;
  ::org::xml::sax::ext::DeclHandler * declarationHandler;
  ::org::xml::sax::ext::LexicalHandler * lexicalHandler;
  ::gnu::xml::libxmlj::sax::GnomeLocator * locator;
  ::gnu::xml::libxmlj::sax::Namespaces * ns;
  jboolean seenFatalError;
  jboolean seenStartDocument;
  ::java::lang::String * base;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_libxmlj_sax_GnomeXMLReader__