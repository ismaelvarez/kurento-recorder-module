/* Autogenerated with kurento-module-creator */

#ifndef __RECORDER_MODULE_OPENCV_IMPL_HPP__
#define __RECORDER_MODULE_OPENCV_IMPL_HPP__

#include <OpenCVProcess.hpp>
#include "RecorderModule.hpp"
#include <EventHandler.hpp>

namespace kurento
{
namespace module
{
namespace recordermodule
{

class RecorderModuleOpenCVImpl : public virtual OpenCVProcess
{
protected:
  std::string path;
  std::string filename;
  int number = 0;


public:

  RecorderModuleOpenCVImpl ();

  virtual ~RecorderModuleOpenCVImpl() = default;

  virtual void process (cv::Mat &mat);

  virtual std::string getPath ();
  virtual void setPath (const std::string &path);

  virtual std::string getFilename ();
  virtual void setFilename (const std::string &filename);
  sigc::signal<void, RecorderModuleFrameSaved> signalRecorderModuleFrameSaved;

};

} /* recordermodule */
} /* module */
} /* kurento */

#endif /*  __RECORDER_MODULE_OPENCV_IMPL_HPP__ */
