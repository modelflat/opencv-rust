{{doc_comment}}
{{debug}}
{{visibility}}{{unsafety_decl}}fn {{name}}{{generic_decl}}({{decl_args}}) -> Result<{{rv_rust_full}}> {
	{{pre_call_args}}
	{{prefix}}{{unsafety_call}}{ sys::{{identifier}}({{call_args}}) }.into_result(){{ret_map}}{{suffix}}
	{{post_call_args}}
}


