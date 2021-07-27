/* Autogenerated with kurento-module-creator */

#include <gst/gst.h>
#include "MediaPipeline.hpp"
#include <RecorderModuleImplFactory.hpp>
#include "RecorderModuleImpl.hpp"
#include <jsonrpc/JsonSerializer.hpp>
#include <KurentoException.hpp>
#include "MediaPipelineImpl.hpp"

#define GST_CAT_DEFAULT kurento_recorder_module_impl
GST_DEBUG_CATEGORY_STATIC (GST_CAT_DEFAULT);
#define GST_DEFAULT_NAME "KurentoRecorderModuleImpl"

namespace kurento
{
namespace module
{
namespace recordermodule
{

RecorderModuleImpl::RecorderModuleImpl (const boost::property_tree::ptree &config, std::shared_ptr<MediaPipeline> mediaPipeline, const std::string &path, const std::string &filename) : OpenCVFilterImpl (config, std::dynamic_pointer_cast<MediaPipelineImpl> (mediaPipeline))

{
  this->setPath(path);
  this->setFilename(filename);
}

std::string RecorderModuleImpl::getPath ()
{
  return RecorderModuleOpenCVImpl::getPath ();
}

void RecorderModuleImpl::setPath (const std::string &path)
{
  RecorderModuleOpenCVImpl::setPath (path);
}

std::string RecorderModuleImpl::getFilename ()
{
  return RecorderModuleOpenCVImpl::getFilename ();
}

void RecorderModuleImpl::setFilename (const std::string &filename)
{
  RecorderModuleOpenCVImpl::setFilename (filename);
}

MediaObjectImpl *
RecorderModuleImplFactory::createObject (const boost::property_tree::ptree &config, std::shared_ptr<MediaPipeline> mediaPipeline, const std::string &path, const std::string &filename) const
{
  return new RecorderModuleImpl (config, mediaPipeline, path, filename);
}

RecorderModuleImpl::StaticConstructor RecorderModuleImpl::staticConstructor;

RecorderModuleImpl::StaticConstructor::StaticConstructor()
{
  GST_DEBUG_CATEGORY_INIT (GST_CAT_DEFAULT, GST_DEFAULT_NAME, 0,
                           GST_DEFAULT_NAME);
}

} /* recordermodule */
} /* module */
} /* kurento */
