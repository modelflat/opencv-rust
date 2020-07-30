#include "common.hpp"
#include <opencv2/imgcodecs.hpp>
#include "imgcodecs_types.hpp"

extern "C" {
	Result<bool> cv_haveImageReader_const_StringR(const char* filename) {
		try {
			bool ret = cv::haveImageReader(std::string(filename));
			return Ok<bool>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<bool>))
	}
	
	Result<bool> cv_haveImageWriter_const_StringR(const char* filename) {
		try {
			bool ret = cv::haveImageWriter(std::string(filename));
			return Ok<bool>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<bool>))
	}
	
	Result<cv::Mat*> cv_imdecode_const__InputArrayR_int(const cv::_InputArray* buf, int flags) {
		try {
			cv::Mat ret = cv::imdecode(*buf, flags);
			return Ok(new cv::Mat(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Mat*>))
	}
	
	Result<cv::Mat*> cv_imdecode_const__InputArrayR_int_MatX(const cv::_InputArray* buf, int flags, cv::Mat* dst) {
		try {
			cv::Mat ret = cv::imdecode(*buf, flags, dst);
			return Ok(new cv::Mat(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Mat*>))
	}
	
	Result<bool> cv_imencode_const_StringR_const__InputArrayR_vector_unsigned_char_R_const_vector_int_R(const char* ext, const cv::_InputArray* img, std::vector<unsigned char>* buf, const std::vector<int>* params) {
		try {
			bool ret = cv::imencode(std::string(ext), *img, *buf, *params);
			return Ok<bool>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<bool>))
	}
	
	Result<cv::Mat*> cv_imread_const_StringR_int(const char* filename, int flags) {
		try {
			cv::Mat ret = cv::imread(std::string(filename), flags);
			return Ok(new cv::Mat(ret));
		} OCVRS_CATCH(OCVRS_TYPE(Result<cv::Mat*>))
	}
	
	Result<bool> cv_imreadmulti_const_StringR_vector_Mat_R_int(const char* filename, std::vector<cv::Mat>* mats, int flags) {
		try {
			bool ret = cv::imreadmulti(std::string(filename), *mats, flags);
			return Ok<bool>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<bool>))
	}
	
	Result<bool> cv_imwrite_const_StringR_const__InputArrayR_const_vector_int_R(const char* filename, const cv::_InputArray* img, const std::vector<int>* params) {
		try {
			bool ret = cv::imwrite(std::string(filename), *img, *params);
			return Ok<bool>(ret);
		} OCVRS_CATCH(OCVRS_TYPE(Result<bool>))
	}
	
}
